import wordcloud
import jieba
import numpy as np
from PIL import Image

with open("红楼梦.txt", "r", encoding="utf-8") as file:
    ww = file.read()
    words = jieba.lcut(ww)
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
        max_words=200,
        mask=mask,
        contour_width=1,
        contour_color='black')
    w.generate(text)
    w.to_file('hlmtp210.png')
