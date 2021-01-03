import math

n = int(input())
a = list(map(int, input().split()))
length = len(a)

def check(a, n):
    for i in range(n):
        if a[i] % 2 == 1 or a[i] == 0:
            return False
    return True

count = 0
while check(a, n):
    count += 1
    for i in range(n):
        a[i] = a[i] // 2

print(count)