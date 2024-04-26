#include <stdio.h>

int main() {
	int max, sum = 0, i = 0;
	scanf("%d", &max);

	while (sum < max) {
        i++;
        sum += i;
	}
	printf("%d", i);
	return 0;
}