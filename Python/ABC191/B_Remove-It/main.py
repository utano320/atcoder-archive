n, x = input().split()

a = input()
tmp = ''
first = True
for i in range(len(a)):
    # スペース検出し、
    if a[i] == ' ':
        # 数値がある
        if tmp != '':
            # 出力する
            if tmp != x:
                if first == False: tmp = ' ' + tmp
                print(tmp, end='')
                if first: first = False
            tmp = ''
        continue

    # スペース以外
    tmp += a[i]

if tmp != '' and tmp != x:
    if first == False: tmp = ' ' + tmp
    print(tmp)
else:
    print()