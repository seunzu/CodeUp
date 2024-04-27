#include <stdio.h>

int main() {
    int n, k, arr[10000], min=24;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        arr[i] = k;
	}
	
	for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
	}
	printf("%d", min);
	return 0;
}