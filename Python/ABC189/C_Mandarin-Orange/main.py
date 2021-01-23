n = int(input())
a = list(map(int, input().split()))

def calcArea(aa):
    # 最小値を求める
    minAa = min(aa)
    # 土台となる面積を求める
    base = minAa * len(aa)
    # 各要素を-minAaして0になった場所で分断する
    bb = list(map(lambda v: v - minAa, aa))
    aaLen = len(bb)
    l = -1

    # 分断した各ブロックの面積を求める
    splitArea = [base]
    for i in range(aaLen):
        # 0でない要素を見つけたら開始位置とする
        if l == -1 and bb[i] != 0: l = i
        # 開始位置が決まってから0を見つけたら終了位置とする
        if l != -1 and bb[i] == 0:
            # 分断したブロックの面積の最大値を求める
            splitArea.append(calcArea(aa[l:i]))
            l = -1
    
    if l != -1:
        splitArea.append(calcArea(aa[l:]))

    # 最大値を返す
    return max(splitArea)

print(calcArea(a))