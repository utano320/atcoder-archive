n, m = map(int, input().split())

cond = []
for i in range(m):
    cond.append(list(map(int, input().split())))

k = int(input())

choice = []
for i in range(k):
    choice.append(list(map(int, input().split())))

# 満たされる条件の最大数
ans = 0
# 置く組み合わせの数
p = pow(2, k)

for i in range(p):
    s = format(i, '0' + str(k) + 'b')
    # その組み合わせの時にボールのある皿のset
    o = set()
    for j in range(k):
        o.add(choice[j][int(s[j])])
    # 条件を満たしている数をチェック
    clear = 0
    for l in range(m):
        if cond[l][0] in o and cond[l][1] in o:
            clear += 1
    # 最大値を更新していればansを更新
    ans = max(ans, clear)

print(ans)