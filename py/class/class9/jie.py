import jieba

# ls = jieba.lcut("python是一种流行的计算机程序设计语言")
# print(ls)
text = "我今天心情很好，但是，遇到这个事情后，我感觉非常郁闷，因为这是一件让人伤心的事情！"

positive_words = ["开心", "满足", "喜欢", "高兴", "快乐"]
negative_words = ["失落", "悲伤", "难过", "痛苦", "伤心", "郁闷"]

words = jieba.lcut(text)

positive_count = 0
negative_count = 0

for word in words:
    if word in positive_words:
        positive_count += 1
    elif word in negative_words:
        negative_count += 1

print("情感分析结果：")
print(f"积极词: {positive_count}")
print(f"消极词: {negative_count}")
print(
    f"情感倾向: {'积极' if positive_count > negative_count else '消极' if negative_count > positive_count else '中性'}"
)
