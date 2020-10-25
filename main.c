#include <stdio.h>
int main(void){
    printf("Hello World!\n");
    // try alert
    printf("Let's alert!! \a\a\a\n");
    // try interpriter
    printf("Which number do you like?");
    int number;
    scanf("%d", &number);
    printf("OK! I understand! You like number is -> %d ¥n", number);
    // put function
    printf("New Line!|");
    printf("Not new line...|");
    puts("Let's new line!|");
    printf("New Line!|");
    // basic arithmetic operations
    puts("Please enter appropriate number of two.");
    int vx = 3;
    int vy = 1;
    printf("vx + vy = %d¥\n", vx + vy);
    printf("vx + vy = %d¥\n", vx + vy);
    printf("vx / vy = %d¥\n", vx / vy);
    printf("vx %% vy = %d¥\n", vx % vy);
    // cast
    vx = 5;
    vy = 2;
    printf("cast: vx / vy = %f¥\n", (double) vx / vy);
    printf("cast: vx / vy = %.1f¥\n", (double) vx / vy);
    printf("cast: vx / vy = %5.1f¥\n", (double) vx / vy);
    printf("cast: vx / vy = %05.1f¥\n", (double) vx / vy);
    return 0;
}