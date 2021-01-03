a, b = input().split()

sumA = sum(list(map(int, a)))
sumB = sum(list(map(int, b)))
print(max(sumA, sumB))