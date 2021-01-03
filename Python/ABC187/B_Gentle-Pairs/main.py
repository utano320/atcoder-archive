n = int(input())
p = [list(map(int, input().split())) for i in range(n)]

# i, jの組み合わせごとに傾きを計算し、絶対値1以下のものをカウント
count = 0
for i in range(n):
    for j in range(1, n):
        if i >= j: continue
        x = p[i][0] - p[j][0]
        y = p[i][1]-p[j][1]
        if x != 0 and abs(y/x) <= 1:
            count = count + 1

print(count)