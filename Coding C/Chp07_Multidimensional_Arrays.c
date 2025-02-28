#include <stdio.h>
int  main(){
    int n_students = 2, n_subjects = 3;

    int marks[2][3];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("Enter the marks of student %d in subject %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }    
    }
    printf("\n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("The marks of student %d in subject %d is %d\n", i+1, j+1, marks[i][j]);
        }    
    }
}