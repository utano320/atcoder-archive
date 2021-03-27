h, w, x, y = map(int, input().split())

def cnt(str):
    p = str.find('#')
    return len(str) if p == -1 else p

c = False
u = []
d = []
l = []
r = []

for i in range(h):
    s = input()

    if i == x - 1:
        if '#' == s[y-1]:
            break
        c = True
        l = ''.join(list(reversed(s[:y-1])))
        r = s[y:]
    elif i < x - 1:
        u.insert(0, s[y-1])
    else:
        d.append(s[y-1])

if c:
    print(1 + cnt(l) + cnt(r) + cnt(''.join(u)) + cnt(''.join(d)))
else:
    print(0)
