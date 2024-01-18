n = int(input())
k = input().split()

for i in range(n):
    k[i] = int(k[i])

for i in range(n-1, -1, -1):
    print(k[i], end=' ')
