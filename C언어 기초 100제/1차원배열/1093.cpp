#include <stdio.h>

int main() {
    int n, t;
    int arr[23] = {};
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        arr[t-1] += 1;
    }
    for (int i = 0; i < 23; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}