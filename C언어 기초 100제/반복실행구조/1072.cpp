#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    reget:
        scanf("%d", &m);
        printf("%d\n", m);
        n -= 1;
        if(n > 0) {
            goto reget;
        }
    return 0;
}