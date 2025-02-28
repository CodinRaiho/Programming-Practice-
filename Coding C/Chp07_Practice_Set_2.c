#include <stdio.h>
int  main(){
    int Table[10];
    for(int i = 0; i<10; i++){
        Table[i] = 5*(i+1);
    }
    for(int i = 0; i<10; i++){
        printf("5 X %d = %d\n", i+1, Table[i]);
    }

    return 0;
}