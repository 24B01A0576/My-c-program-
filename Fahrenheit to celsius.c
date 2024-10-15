#include<stdio.h>
void main()
    {
    int Fahrenheit;
    float Celsius;
    printf("enter temperature of Fahrenheit:");
    scanf("%d",& Fahrenheit);
    Celsius=(5.0/9)*(Fahrenheit-32);
    printf(" the temperature  in Celsius: %f",Celsius);
     }