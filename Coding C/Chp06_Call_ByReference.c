#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int  main(){
    int x = 3, y = 4;
    printf("Value of x and y before wrong swap is %d and %d respectively\n", x, y);
    wrong_swap(x, y);
    printf("Value of x and y after wrong swap is %d and %d respectively\n\n", x, y);


    printf("Value of x and y before swap is %d and %d respectively\n", x, y);
    swap(&x, &y);
    printf("Value of x and y after swap is %d and %d respectively\n", x, y);

}

void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}