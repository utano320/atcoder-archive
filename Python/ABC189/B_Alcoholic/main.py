n, x = map(int, input().split())

x *= 100
sum = 0
result = -1
for i in range(n):
    v, p = map(int, input().split())
    sum += v * p
    if x < sum:
        result = i + 1
        break

print(result)