#include<stdio.h>
int main()
{
    //C Program to convert Fahrenheit to Celsius.
    float temp;
    printf("Enter any value of temperature : ");
    scanf("%f", &temp);
    float output = (temp-32)*5/9;
    printf("Temperature in Celsius scale is %.2f", output);
    return 0;
}
