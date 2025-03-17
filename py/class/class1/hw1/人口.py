sum = 3120324986
year_seconds = 365 * 24 * 3600
remain = [0, 0, 0] #上一年剩下的秒数

for i in range(1, 6):
  sum += (year_seconds + remain[0]) // 7 \
    + (year_seconds + remain[1]) // 45 \
      - (year_seconds + remain[2]) // 13
  
  remain = [(year_seconds + remain[0]) % 7, \
            (year_seconds + remain[1]) % 45, \
              (year_seconds + remain[2]) % 13]
  
  print("第{}年美国人口为{}".format(i, sum))