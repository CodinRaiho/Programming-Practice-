#include <stdio.h>
int subtraction(int *a, int *b);
int  main(){
    int i = 70, *j = &i, l = 71, *k = &l;

    printf("BY INTEGER VALUE: \n");
    printf("The value of *j is %u\n", j);
    printf("The value of *k is %u\n", k);

    printf("The value of *k - *j is %u\n", subtraction(j, k));

    return 0;
}
int subtraction(int *a, int *b){
    int result = *b - *a;

    return result;
}