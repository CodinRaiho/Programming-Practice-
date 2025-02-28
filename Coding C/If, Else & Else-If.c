#include <stdio.h>

int main(){
    int a;
    printf("Let's see if you are fit for a job or not, Enter your age\n");
    scanf("%d", &a);

    if(a>=18 && a<70){
        printf("You are eligible for a job since your age is lower than 70 and higher than or equal to 18\n");
    }

    else if(a<18){
        printf("You are not eligible for a job because you are younger than 18\n");
    }

    else{
        printf("You are not eligible for a job because you are older than 70\n");
    }
    return 0;
}
//own made if,else,elseif code