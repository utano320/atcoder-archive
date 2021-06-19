import math

n = int(input())

a = math.floor(n * 1.08)
print('Yay!' if a < 206 else 'so-so' if a == 206 else ':(')