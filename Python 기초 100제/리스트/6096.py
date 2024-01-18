d = [[0 for j in range(19)] for i in range(19)]

for i in range(19):
    a = list(map(int, input().split()))
    for j in range(19):
        d[i][j] = a[j]

n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    for j in range(19):
        if d[j][y] == 0:
            d[j][y] = 1
        else:
            d[j][y] = 0

        if d[x][j] == 0:
            d[x][j] = 1
        else:
            d[x][j] = 0

for i in range(19):
    for j in range(19):
        print(d[i][j], end=' ')
    print()
