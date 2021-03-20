import math

n = int(input())
m = int(math.log10(n))

sum = 0
for i in range(m):
    # 奇数桁の場合はスキップ
    if i % 2 != 0: continue

    p = i // 2

    # 最後の桁数かどうか
    if i == m - 1:
        # 分割した数の小さい方を求める
        a = int(str(n)[:(p + 1)])
        b = int(str(n)[(p + 1):])
        c = min(a, b)
        add = a - 10 ** p
        if a <= b: add += 1
        if add > 0: sum += add
    else:
        sum += 9 * 10 ** p

print(sum)