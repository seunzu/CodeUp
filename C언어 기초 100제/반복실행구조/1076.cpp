#include <stdio.h>

int main() {
	char c;
    char temp = 'a';
	scanf("%c", &c);

    do {
        printf("%c ", temp);
        temp++;
    } while (temp <= c);
	return 0;
}