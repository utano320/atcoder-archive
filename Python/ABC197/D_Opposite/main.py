n = int(input())
x0, y0 = map(int, input().split())
xx, yy = map(int, input().split())

# 重心を求める
a = (yy - y0) / (xx - x0)
b = y0 - a * x0
cx = (x0 + xx) / 2
cy = a * cx + b

print(cx, cy)