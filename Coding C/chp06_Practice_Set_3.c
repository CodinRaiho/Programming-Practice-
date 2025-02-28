#include <stdio.h>
void ValueToTen(int *a);
int main(){
    int i = 4;
    printf("The value of i is %d\n", i);
    ValueToTen(&i);
    printf("The value of i after the function is %d\n", i);
    return 0;
}
void ValueToTen(int *a){
     *a *= 10;
}