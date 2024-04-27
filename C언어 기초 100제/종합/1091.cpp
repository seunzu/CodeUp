#include <stdio.h>

int main() {
	long long int a, m, d, n;
	scanf("%ld %ld %ld %ld", &a, &m, &d, &n);
    
	for (int i=0; i<n-1; i++) {
        a = a*m+d;
    }
	printf("%ld", a);
	return 0;
}