#include <stdio.h>
int Change(int x);
int  main(){
    int a=4;
    printf("The sum of a and b is %d\n", Change(a));//-------> Does not change
    return 0;
}
int Change(int x){
    int x = 9;
    return x;
}