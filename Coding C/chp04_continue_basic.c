#include <stdio.h>
int  main(){
    int a=0, i=5;

    while(a<10){
        a++;
        if(a!=i){
            continue;
        }
        else{
            printf("%d\n", a);
        }
    }
    return 0;
}