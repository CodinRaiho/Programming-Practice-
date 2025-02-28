# include <stdio.h>

void main (){
    // There are different types of operators:
    /*
        1. Arithmetic operators ->   +, -, *, /, %    -> returns numbers
        2. Relational operators ->   >, <, ==, <=, >=, !=    -> returns true or false (boolean value)
        3. Logical operators ->    && (AND), || (OR), ! (NOT)
    */
    // Eg: Arithmetic operators:
    int num1 = 17, num1a = 8;
    float num2 = 12.5;
    

    printf("%d + %.1f = %.1f", num1, num2, num1 + num2); // addition
    printf("\n%d - %.1f = %.1f", num1, num2, num1 - num2); // subtraction
    printf("\n%d X %.1f = %.1f", num1, num2, num1 * num2); // multiplication
    printf("\n%d / %.1f = %.2f", num1, num2, num1 / num2); // division
    printf("\n%d %% %d = %d", num1, num1a, num1 % num1a); // modulo -> remainder
    
}