#include <stdio.h>
int  main(){
    int marks[4];
    int *ptr = &marks[0];

    for(int i = 0; i<4; i++){
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", ptr);
        ptr++;//-------------------------------> By increasing ptr it will point to the next integer in marks[4]
    }
    for(int i = 0; i<4; i++){
        printf("The value of marks of student %d is %d \n", i+1, marks[i]);
    }
    return 0;
}