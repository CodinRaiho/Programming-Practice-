#include <stdio.h>
int sum(int a, int b);
int main(){
    int c= sum(4, 6);
    printf("The value of c is %d", c);
    return 0;
}
int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}