n = int(input())
m = {}

result = "satisfiable"
for i in range(n):
    s = input()
    k = s.replace('!', '')
    f = s[0] == '!'
    if k in m and m[k] != f:
        result = k
        break
    m[k] = f

print(result)