#include <stdio.h>
int  main(){
    for(int i = 0; i<999; i++){
        printf("The value of i is %d\n", i);
        if(i==10){
            break;
        }
    }
}