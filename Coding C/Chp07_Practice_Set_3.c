#include <stdio.h>
int  main(){
    int Table[10];
    int a;
    printf("Enter the value of which numbers table u want to create\n");
    scanf("%d", &a);
    for(int i = 0; i<10; i++){
        Table[i] = a*(i+1);
    }
    for(int i = 0; i<10; i++){
        printf("%d X %d = %d\n",a, i+1, Table[i]);
    }

    return 0;
}