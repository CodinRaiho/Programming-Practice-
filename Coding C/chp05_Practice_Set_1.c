#include <stdio.h>

int Mean();

int  main(){
    float average = Mean();
    printf("The average of a, b, c is %.1f", average);
    
}
int Mean(){
    int a, b, c;

    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    float average = (a + b + c)/3;
    return average;
}