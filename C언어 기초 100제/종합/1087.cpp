#include <stdio.h>

int main() {
	int n, sum=0, i=0;
	scanf("%d", &n);
	
	while (1) {
        sum += ++i;
        if (sum >= n) {
            printf("%d", sum);
            break;
        }
	}
	return 0;
}