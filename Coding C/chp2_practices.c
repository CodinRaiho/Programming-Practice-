#include <stdio.h>
#include <math.h>

int main (){
    int num;

    printf("Enter The Number\n");
    scanf("%d", &num);
    printf("Divisibility test returns(If the remainder results 0 the number is divisible by 5 if not then it is not divisible by 5): %d", num%5);
}