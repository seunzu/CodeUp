board = []

for i in range(10):
    board.append(list(map(int, input().split())))

x, y = 1, 1

while True:
    if (board[x][y] == 0):
        board[x][y] = 9
    elif (board[x][y] == 2):
        board[x][y] = 9
        break

    if ((board[x][y+1] == 1 and board[x+1][y] == 1)):
        break

    if (board[x][y+1] != 1):
        y += 1
    elif (board[x+1][y] != 1):
        x += 1

for i in range(10):
    for j in range(10):
        print(board[i][j], end=' ')
    print()