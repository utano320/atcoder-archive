a, b, c = map(int, input().split())

c_even = c % 2 == 0
a_p = a >= 0
b_p = b >= 0
abs = 1 if abs(a) > abs(b) else -1 if abs(a) < abs(b) else 0

# cが奇数のとき
result = 0 if a == b else 1 if a > b else -1

# cが偶数のとき
if a != b and c_even:
    # どちらかプラス
    if a_p or b_p:
        # マイナスの値の絶対値が大きい場合は逆転する
        if a > b and a < -b or a < b and -a > b:
            result *= -1
        # 片方マイナスで絶対値が等しい
        elif a == -b:
            result = 0
    # 両方マイナス
    else:
        result *= -1

print('=' if result == 0 else '>' if result == 1 else '<')
