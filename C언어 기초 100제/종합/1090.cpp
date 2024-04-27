#include <stdio.h>
#include <math.h>

int main() {
	long a, r, n;
	scanf("%ld %ld %ld", &a, &r, &n);
	printf("%ld", a*(int)pow(r,n-1));
	return 0;
}