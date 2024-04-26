#include <stdio.h>

int main() {
    char c;

    while (c != 'q') {
        scanf("%c", &c);
        printf("%c", c);        
    }
    return 0;
}