#include <stdio.h>
#include <math.h>

int main (){
    int a = 5, b = 2, c = 8, y = 5, e = 29;
    float d = 8.6;

    printf("the value of %d x %d is %d\n",a, b, a * b);
    printf("the value of %d + %d is %d\n",a, b, a + b);
    printf("the value of %d - %d is %d\n",a, b, a - b);
    printf("the value of %d / %d is %d\n",a, b, a / b);
    printf("the value of %d / %.1f is %.1f\n",a, d, a / d);
    printf("%d + %.1f = %.1f\n", a, d, a + d);

    printf("The value of a to the power b is %.1f\n", pow(a, b));//this operator pow requires the library <math.h>

    printf("(5 x %d) + (3 x %d) = %d \n", a, c, 5*a + 3*c);
    printf("5 x (%d + 3 x %d) = %d \n", a, c, 5 * (a + 3*c));//example of parathesis (using of brackets to show priority)
    printf("the value of %d x %d is %d\n", y, e, y * e);
    printf("The remainder of a / b is %d\n", a%b);
}