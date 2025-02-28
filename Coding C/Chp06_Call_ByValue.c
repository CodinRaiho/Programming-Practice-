#include <stdio.h>
int sum(int a, int b);
int  main(){
    int a=4, b=3;
    printf("The sum of a and b is %d\n", sum(a,b));
    return 0;
}
int sum(int a, int b){
    int result = a + b;
    return result;
}