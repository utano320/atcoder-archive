n = int(input())

c = 0
for i in range(n*2):
    m = i + 1
    if m % 2 == 0:
        d = m / 2
        if ((2 * d + 1) * d - n) % m == 0:
            c += 1
    else:
        d = m // 2
        if ((2 * d + 2) * d + d + 1 - n) % m == 0:
            c += 1

print(c)