#include <stdio.h>
int  main(){
    int i=90, *j=&i;

    printf("The value of i is %d\n", i);
    printf("The value of *j is also the same as i which is %d\n", *j);
    printf("The value of i's address is %d\n", j);
    printf("The address of j is %d\n", &j);
    printf("The address of i through j is %d\n", *(&j));
    return 0;
}