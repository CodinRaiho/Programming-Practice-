#include <stdio.h>
int  main(){

    char ch;

    printf("Enter your character\n");
    scanf("%d", &ch);

    if(ch<=122 && ch>=97){
        printf("Your character is lowercase\n");
    }
    else{
        printf("Your character  is not lowercase\n");
    }
    return 0;
}