import json  # 还得学个json太痛苦了，没学过js只用了写过配置文件
from urllib.request import urlopen

# 用法来自https://composingprograms.netlify.app/1/1
qu = "问题:"
lk = "链接:"
url = "https://www.zhihu.com/hot"

api = "https://www.zhihu.com/api/v3/feed/topstory/hot-lists/total?limit=50&mobile=true"  # total.json
# 安卓第三方知乎Hydrogen源码里面扒到的 https://github.com/zhihulite/Hydrogen
try:
    All = urlopen(api)
    total = All.read().decode()
    print("网页加载成功")
    data = json.loads(total)
    for item in data["data"]:
        question = item["target"]["title"]
        question_id = item["target"]["id"]
        question_url = f"https://www.zhihu.com/question/{question_id}"
        print(f"{qu} {question}")
        print(f"{lk} {question_url}")
        print()

except Exception as error:
    print(f"网页加载失败: {error}")
    exit()
