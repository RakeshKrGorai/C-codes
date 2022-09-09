#include<stdio.h>
int main()
{
    //Write a program in C to swap two numbers without using third variable.
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Before Reverse a = %d and b = %d \n", a,b);
    a-=b;
    b+=a;
    a=b-a;
    printf("After Reverse a = %d and b = %d.", a,b);
    return 0;
}
