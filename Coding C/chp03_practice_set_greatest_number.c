#include <stdio.h>
int  main(){
    
    int num1, num2, num3, num4;

    printf("Enter first number\n", num1);
    scanf("%d", &num1);

    printf("Enter second number\n", num2);
    scanf("%d", &num2);

    printf("Enter third number\n", num3);
    scanf("%d", &num3);

    printf("Enter fourth number\n", num4);
    scanf("%d", &num4);

    if(num1>num2 && num1>num3 && num1>num4 ){
        printf("%d is the greatest number among all the numbers entered", num1);
    }

    else if(num2>num2 && num2>num3 && num2>num4 ){
        printf("%d is the greatest number among all the numbers entered", num2);
    }

    else if(num3>num2 && num3>num1 && num3>num4 ){
        printf("%d is the greatest number among all the numbers entered", num3);
    }

    else if(num4>num2 && num4>num3 && num4>num1 ){
        printf("%d is the greatest number among all the numbers entered", num4);
    }
    

    return 0;
}