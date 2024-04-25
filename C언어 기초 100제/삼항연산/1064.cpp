#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a<b ? a:b)>c ? c:(a<b ? a:b));
    return 0;
}