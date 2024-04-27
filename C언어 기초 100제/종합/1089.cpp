#include <stdio.h>

int main() {
	int a, d, n;
	scanf("%d %d %d", &a, &d, &n);
	printf("%d", (n-1)*d+a);
	return 0;
}