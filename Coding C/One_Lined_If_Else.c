#include <stdio.h>

int main(){
    int a;
    printf("Enter a Number\n");
    scanf("%d", &a);
    (a<10) ? printf("Your number is less than 10\n") : printf("Your number is more than 10\n");
}
//one lined if else