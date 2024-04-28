#include <stdio.h>

int main() {
	int n, x, y; 
    int arr[20][20];

    // 한 줄씩 바둑판 상황 입력 받음
	for (int i = 1; i <= 19; i++){	
        for (int j = 1; j <= 19; j++) {
            scanf("%d", &arr[i][j]);
        }
	}
	
	scanf("%d", &n); // 좌표 개수 입력
	for (int i = 0; i < n; i++) { // 좌표 개수만큼
        scanf("%d %d", &x, &y);
        for (int j = 1; j <= 19; j++) { // 가로: 흑 <-> 백
            if (arr[x][j] == 1) {
                arr[x][j] = 0;
            }
            else {
                arr[x][j] = 1;
            }
        }
        for (int j = 1; j <= 19; j++) { // 세로: 흑 <-> 백
            if (arr[j][y] == 1) {
                arr[j][y] = 0;
            }
            else {
                arr[j][y] = 1;
            }        
        }   
	}
	
	for (int i = 1; i <= 19; i++){
        for (int j = 1; j <= 19; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
	}
	
	return 0;
}