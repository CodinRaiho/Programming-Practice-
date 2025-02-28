#include <stdio.h>

int CelsiusToFahrenheit();

int  main(){
    int Celsius = CelsiusToFahrenheit();
    printf("The Converted value of a from Celsius to Fahreheit is %dK\n", Celsius);
    
}
int CelsiusToFahrenheit(){
    int a;
    printf("Enter the value of a in Celsius\n");
    scanf("%d", &a);
    int Celsius = (a+273);
    return Celsius;
}