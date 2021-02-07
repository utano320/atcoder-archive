n = 100000
x = 100000000
print(n, x)
first = True
for i in range(n):
    v = str(x) if False else '99999999'
    print(' ' + v if first == False else v, end='')
    if first: first = False