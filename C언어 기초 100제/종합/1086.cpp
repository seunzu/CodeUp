#include <stdio.h>

int main() {
	int w, h, b;
	double mb;
	scanf("%d %d %d", &w, &h, &b);
	mb = (float)w*h*b/8/1024/1024;
	printf("%.2lf MB", mb);
	return 0;
}