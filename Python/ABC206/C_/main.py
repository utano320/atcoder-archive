n = int(input())
a = list(map(int, input().split()))

ao = {}

d = 0
for i in range(n):
    if a[i] in ao:
        d += ao[a[i]]
        ao[a[i]] += 1
    else:
        ao[a[i]] = 1

print(int(n * (n - 1) / 2 - d))