#include <stdio.h>
int square(int a);
int main(){
    int Side, Area= square(Side);
    printf("Enter the value of Side\n");
    scanf("%d", &Side);
    printf("The value of Area is %d", Area);
    return 0;
}
int square(int a){
    int Area;
    Area = a*a;
    return Area;
}