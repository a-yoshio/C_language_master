#include <stdio.h>
int main(void){
    printf("Hello World!\n");
    printf("Which number do you like?");
    // try interpriter
    int number;
    scanf("%d", &number);
    printf("OK! I understand! You like number is -> %d", number);
    // put function
    printf("New Line!|");
    printf("Not new line...|");
    puts("Let's new line!|");
    printf("New Line!|");
    return 0;
}