#include <stdio.h>
int  main(){
    int marks[4];

    printf("Enter the marks of 1st person: ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of 2nd person: ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of 3rd person: ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of 4th person: ");
    scanf("%d", &marks[3]);

    printf("1st, 2nd, 3rd and 4th people have scored the values %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);
}