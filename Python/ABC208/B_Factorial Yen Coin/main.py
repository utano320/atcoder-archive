p = int(input())

sum = 0
x = 1
current = 1
next = 2

while p != 0:
    d = p % next
    sum += d // x
    p -= d
    current += 1
    x *= current
    next *= current + 1

print(sum)
