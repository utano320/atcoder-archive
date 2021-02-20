s = input()
len_s = len(s)

result = 'Yes'
for i in range(len_s):
    c = s[i]
    if i % 2 == 0 and c == c.upper() or i % 2 == 1 and c == c.lower():
        result = 'No'
        break

print(result)