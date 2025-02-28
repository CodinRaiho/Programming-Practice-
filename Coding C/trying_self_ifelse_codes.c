#include <stdio.h>
int main(){
    int a;
    printf("Enter your age\n");
    scanf("%d", &a);

    if(a>=18){
    printf("You can have a driving license\n");
    }
    else{
        printf("You can not have a driving license since you are under 18\n");
    }
    return 0;
}