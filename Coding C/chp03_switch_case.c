#include <stdio.h>
int  main(){
    int a;

    printf("Enter your rating please\n");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("Your rating is 1\n");
        break;
        return 0;

        case 2:
        printf("Your rating is 2\n");
        break;
        return 0;

        case 3:
        printf("Your rating is 3\n");
        break;
        return 0;

        case 4:
        printf("Your rating is 4\n");
        break;
        return 0;

        case 5:
        printf("Your rating is 5\n");
        break;
        return 0;

        default:
        printf("Invalid!\n");
        break;
    }
    return 0;
}