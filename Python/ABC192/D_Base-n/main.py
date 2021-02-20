def toInt(x, n):
    result = 0
    ni = 1
    for i in range(len_x):
        result += int(x[-(i+1)]) * ni
        ni *= n

    return result


x = input()
len_x = len(x)

m = int(input())

d = max(map(int, list(x)))


n = d + 1
result = toInt(x, n)
if len_x == 1:
    print(1 if result <= m else 0)
else:
    while result <= m:
        n += 1
        # xをn進数で表す
        result = toInt(x, n)

    print(n - d - 1)
