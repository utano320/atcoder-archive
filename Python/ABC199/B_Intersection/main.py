n = int(input())
a_max = max(map(int, input().split()))
b_min = min(map(int, input().split()))

ans = b_min - a_max + 1
if ans < 0:
    ans = 0

print(ans)