n = int(input())

aAll = 0
bAll = 0

area = []
for i in range(n):
    a, b = map(int, input().split())
    area.append([a+b, a])
    aAll += a

# a+bが大きいところほど演説の効果が大きいので、a+bでソートする
area = sorted(area)[::-1]

count = 0
for i in range(n):
    # 演説するたびに、bは両方の票が増え、aは自分の分だけ減る
    bAll += area[i][0]
    aAll -= area[i][1]
    count += 1
    # aAllをbAllが超えたら抜ける
    if aAll < bAll: break

print(count)
