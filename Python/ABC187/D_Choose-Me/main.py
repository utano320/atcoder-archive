n = int(input())

aAll = 0
bAll = 0

area = []
for i in range(n):
    a, b = map(int, input().split())
    area.append([a*2+b, a])
    aAll += a

# a*2+bが大きいところほど演説の効果が大きいので、a*2+bでソートする
area = sorted(area)[::-1]

count = 0
for i in range(n):
    # 演説するたびに、bは両方の票が増え、aは自分の分だけ減る
    bAll += area[i][0] - area[i][1]
    aAll -= area[i][1]
    count += 1
    # aAllをbAllが超えたら抜ける
    if aAll < bAll: break

print(count)
