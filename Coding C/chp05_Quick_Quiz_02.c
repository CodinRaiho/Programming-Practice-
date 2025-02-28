#include <stdio.h>
int square(int a);
int main(){
    int Area= square(8);
    printf("The value of Area is %d", Area);
    return 0;
}
int square(int a){
    int Area;
    Area = a*a;
    return Area;
}