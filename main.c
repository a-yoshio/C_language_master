#include <stdio.h>
int main(void){
    printf("Hello World!\n");
    printf("Which number do you like?");
    // try interpriter
    int number;
    scanf("%d", &number);
    printf("OK! I understand! You like number is -> %d", number);
    return 0;
}