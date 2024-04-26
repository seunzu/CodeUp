#include <stdio.h>

int main() {
	char grade;
	scanf("%c", &grade);
    
	switch (grade) { 
        case 'A':
            printf("best!!!\n");
            break;
        case 'B':
            printf("good!!\n");
            break;
        case 'C':
            printf("run!\n");
            break;
        case 'D':       
            printf("slowly~\n");
            break;
        default:
            printf("what?\n");
                break;
	}
	return 0;
}