#include <stdio.h>
float force(float mass);
int  main(){
    float a;
    printf("Enter the value of a in kgs\n");
    scanf("%f", &a);
    printf("The value of a in Newton is %.2f\n", force(a));
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}