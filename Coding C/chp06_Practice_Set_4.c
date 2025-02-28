#include <stdio.h>
void Avg(int a, int b, int *Sum, float *avg);
int  main(){
    int i, j, Sum;
    float avg;
    i = 6;
    j = 12;
    Avg(i, j, &Sum, &avg);
    printf("The value of sum is %d\n", Sum);
    printf("The value of avg is %.2f\n", avg);
}
void Avg(int a, int b, int *Sum, float *avg){
    *Sum = a + b;
    *avg = (float)(*Sum)/2;
}