#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main(){
    srand(time(0));
    int number= rand()%100+1;
    printf("The number is %d", number);
}