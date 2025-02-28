#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!!!\n");

    // What is a variable?
    /*
        A variable in simple terms is a container to store a value or required data.

        In C we can store the following data types in variables, for each of them we have a reserved keyword
        to specify their type.

        Some important ones are as follows:
        1) We can store numeric values without '.' (floating point) -> int a = 2983
        2) We can store numeric values with '.' -> float b = 32.29
        3) We can store character values -> char c = 'R'

        We can use 'printf("Any string")' to print any string/text value and we can also display our variables
        using the function.

        We have 'format specifiers' that help us to display values of our variables using the printf function.
        Important format specifiers are:
        1) %d -> To print integer values
        2) %f -> To print float values
        3) %c -> To print character values

        The order of the format specifier in the string and the order of the comma separated sequence of our
        variables after the string ("") ends inside the printf function matters for determining the order of
        printing the values inside the string.

        Eg:
            int a = 1, b = 2;
            float c = 1.5, d = 2.5;
            char e = 'e', f = 'f';

            // I can decide the order in which they will be displayed:

            printf("int: %d, float: %.2f, char: %c\nint: %d, float: %.1f, char: %c", a, c, e, b, d, f);
        
        Tip: For '%f' we can specify the count of numbers to show after the point using ->
        Eg: 
            If we have float value: 12.234567
            %.2f -> 12.23
            %.3f -> 12.234
            %.4f -> 12.2345
            ... and so on.

    */

    // Running the example: 
    int a = 1, b = 2;
    float c = 1.5, d = 2.5;
    char e = 'e', f = 'f';
    printf("int: %d, float: %.2f, char: %c\nint: %d, float: %.1f, char: %c", a, c, e, b, d, f);

    // Good Practice: Always give meaningful names to your variables.
    // int a = 5 ... X
    // int num = 5 ...  ✔

    // Task: Create 3 different variables, display float first, character second and integer last ->

    int keldo = 5;
    float bail = 4.8;
    char nalayk = 'k';
    
    printf("\nfloat: %.1f, char: %c, int: %d", bail, nalayk, keldo );

    return 0;
}