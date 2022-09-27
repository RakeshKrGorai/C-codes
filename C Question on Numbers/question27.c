#include<stdio.h>
#include<math.h>
int main()
{
    //C Program to calculate the square root of a given number.
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    float x= sqrt(n);
    printf("Square root of %d is %0.2f", n, x);
    return 0;
}
