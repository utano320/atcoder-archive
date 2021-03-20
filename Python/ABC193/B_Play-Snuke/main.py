n = int(input())

min = -1
for i in range(n):
    a, p, x = map(int, input().split())
    if a < x and (min > p or min == -1):
        min = p

print(min)