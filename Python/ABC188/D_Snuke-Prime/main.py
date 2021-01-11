n, c = map(int, input().split())

dmin = 1000000000
dmax = 1

s = []
for i in range(n):
    ai, bi, ci = map(int, input().split())
    s.append([ai, bi, ci])
    if dmin > ai: dmin = ai
    if dmax < bi: dmax = bi

sum = 0
for d in range(dmin, dmax+1):
    dsum = 0
    for i in range(n):
        # そのサービスを利用する日の場合の料金加算
        if s[i][0] <= d <= s[i][1]:
            dsum += s[i][2]
            if dsum > c: break
    sum += min(dsum, c)

print(sum)