n = int(input())
a = list(map(int, input().split()))

p = n // 2
q = p if n % 2 == 0 else p + 1

a1 = a[:p]
a2 = a[q:]
a2.reverse()

r = {}
c = 0
for i in range(p):
    t = a1[i]
    s = a2[i]
    # 違う数字出現
    if t != s and (t not in r or s not in r):
        # 以降の t と s は同じ数字として扱う
        r[t] = s
        r[s] = t
        c += 1

print(c)