a, b, c = map(int, input().split())
print('Yes' if a*a + b*b - c*c < 0 else 'No')