n = int(input())
a = list(map(int, input().split()))

ai = []
for i in range(pow(2, n)): ai.append([a[i], i+1])

for i in range(n-1):
    # i回戦（準決勝まで）
    winner = []
    for j in range(0, pow(2, n-i-1)):
        winner.append(ai[2*j] if ai[2*j][0] > ai[2*j+1][0] else ai[2*j+1])
    ai = winner

# 決勝の敗者の番号を出力
print(ai[1][1] if ai[0][0] > ai[1][0] else ai[0][1])