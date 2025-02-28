#include <stdio.h>
void Address(int *i);
int  main(){
    int i=90;
    printf("The address of i is %d\n", &i);
    Address(&i);
    return 0;
}
void Address(int *i){
    int i=90;
    printf("The address of i through the address function is %d", &i);
}