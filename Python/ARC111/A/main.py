# 2つの数の大小比較をする
def compare(a, b):
    na = len(a)
    nb = len(b)
    if na > nb: return 1
    if na < nb: return -1
    for i in range(na):
        if a[i] > b[i]: return 1
        if a[i] < b[i]: return -1
    
    return 0

# 繰り上がり処理
def carry(d):
    d = list(reversed(d))
    n = len(d)
    for i in range(n - 1):
        if d[i] >= 10:
            k = d[i] // 10
            d[i] -= k * 10
            d[i+1] += k
    
    while d[-1] >= 10:
        k = d[-1] // 10
        d[-1] -= k * 10
        d.append(k)

    return ''.join(map(str, list(reversed(d))))

# 掛け算
def multi(a, b):
    na = len(a)
    nb = len(b)
    res = [0] * (na + nb - 1)
    for i in range(na):
        for j in range(nb):
            res[i+j] += int(a[i]) * int(b[j])
    
    return carry(res)

# 割り算
def division(a, b):
    na = len(a)
    nb = len(b)
    if na < nb: return 0

    # d: 商の桁数
    d = na - nb
    p = a[:-d] if d > 0 else a
    if compare(p, b) >= 0: d += 1

    # 商を求める
    if d == 0: return 0
    r = a[:-d+1]
    ans = [0] * d
    for i in range(d, 0, -1):
        ans[i-1] = 9
        for j in range(1, 10):
            x = multi(b, str(j))
            if compare(x, r) == 1:
                ans[i-1] = j - 1
                r = str(int(r) - int(multi(b, str(j-1))))
                break
        if i > 1:
            r += a[-d+i-1]
            print('r:' + r)

    return [''.join(map(str, list(reversed(ans)))), r]

n, m = input().split()

print(division(n, m))

# # nn = '0' * n
# print(n)
# # print(int((10 ** n / m) % m))

