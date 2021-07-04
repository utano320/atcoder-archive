n, k = map(int, input().split())
a = list(map(int, input().split()))
asort = a[:]
asort.sort()

b = k // n
d = k % n

t = asort[d - 1] if d != 0 else 0
for i in range(n):
    p = a[i]
    print(b + 1 if p <= t else b)
