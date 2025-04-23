import wordcloud
import jieba
import numpy as np
from PIL import Image

with open("红楼梦.txt", "r", encoding="utf-8") as file:
    ww = file.read()
    words = jieba.lcut(ww)
    stopwords = [
        '的', '了', '在', '是', '我', '有', '和', '就', '不', '人', '都', '一', '一个', '上',
        '也', '很', '到', '说', '要', '去', '你', '会', '着', '没有', '看', '好', '被', '那',
        '这', '来', '他', '她', '那么', '但是', '只是', '所以', '因为', '如果', '什么', '这样',
        '这个', '那个', '只有', '已经', '可以', '自己'
    ]
    words = [word for word in words if word not in stopwords and len(word) > 1]
    text = " ".join(words)
    ttt = {}
    for i in text:
        if len(i) <= 1:
            continue
        else:
            ttt[i] = ttt.get(i, 0) + 1
    tttt = sorted(ttt.items(), key=lambda x: x[1], reverse=True)

    mask = np.array(Image.open("jby.jpg"))
    w = wordcloud.WordCloud(
        background_color='white',
        font_path=
        "C:/Users/Qiumix/AppData/Local/Microsoft/Windows/Fonts/JinzisheTongfang-Regular.ttf",
        max_words=10,
        mask=mask,
        contour_width=1,
        contour_color='black')
    w.generate(text)
    w.to_file('hlmtp210.png')
