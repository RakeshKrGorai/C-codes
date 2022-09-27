#include<stdio.h>
int main()
{
    //C Program to convert Celsius to Fahrenheit.
    float temp;
    printf("Enter any value of temperature : ");
    scanf("%f", &temp);
    float output = (temp * 9/5)+32;
    printf("Temperature in Fahrenheit scale is %.2f", output);
    return 0;
}
