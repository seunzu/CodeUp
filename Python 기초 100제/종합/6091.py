a, b, c = map(int, input().split())
d = 1
# 최소공배수
while d % a != 0 or d % b != 0 or d % c != 0: # 나누어 떨이지지 않을 때까지
    d += 1
print(d)

