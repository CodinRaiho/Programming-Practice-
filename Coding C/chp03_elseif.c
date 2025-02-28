#include <stdio.h>
int  main(){
    int a;

    printf("Enter a number between 0 & 4\n");
    scanf("%d", &a);

    if(a==1){
        printf("The number is 1\n");
    }
    else if(a==2){
        printf("The number is 2\n");
    }
    else if(a==3){
        printf("The number is 3\n");
    }
    else{
        printf("Invalid number");
    }
    return 0;
}