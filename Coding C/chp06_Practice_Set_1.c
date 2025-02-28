#include <stdio.h>
int  main(){
    int i=90, *j=&i;
    printf("The address of i is %d\n", &i);
    printf("The value of i through j is %d\n", *j);
    return 0;
}