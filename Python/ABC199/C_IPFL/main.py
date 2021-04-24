n = int(input())
s = input()
q = int(input())

for i in range(q):
    t, a, b = map(int, input().split())

    if t == 1:
        sa = s[a-1]
        sb = s[b-1]
        s = s[:a-1] + sb + s[a:b-1] + sa + s[b:]
    else:
        s1 = s[:n]
        s2 = s[n:]
        s = s2 + s1

print(s)