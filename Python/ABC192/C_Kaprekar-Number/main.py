n, k = map(int, input().split())

a = n
for i in range(k):
    a_str = str(a)
    g1 = int(''.join(sorted(a_str, reverse=True)))
    g2 = int(''.join(sorted(a_str)))
    a = g1 - g2

print(a)