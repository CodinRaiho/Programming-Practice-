#include <stdio.h>
int  main(){
    int a[4] = {1, 2, 3, 4};

    printf("The value of a[0] is %d\n", a[0]);
    printf("The value of a[1] is %d\n", a[1]);
    printf("The value of a[2] is %d\n", a[2]);
    printf("The value of a[3] is %d\n\n", a[3]);

    float b[4] = {1.2, 2.4, 3.6, 4.8};

    printf("The value of b[0] is %.2f\n", b[0]);
    printf("The value of b[1] is %.2f\n", b[1]);
    printf("The value of b[2] is %.2f\n", b[2]);
    printf("The value of b[3] is %.2f\n\n", b[3]);
    return 0;
}