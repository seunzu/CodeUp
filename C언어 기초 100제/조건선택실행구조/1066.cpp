#include <stdio.h>

int main() {
    int a, b, c;
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    for (int i = 0; i < 3; i++) {
        if (arr[i] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}