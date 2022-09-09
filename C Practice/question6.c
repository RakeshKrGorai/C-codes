#include<stdio.h>

int main()
{
    //Write a program in C to check whether a number is palindrome or not using iteration.
    int n, remainder, number;
    printf("Enter Number to check : ");
    scanf("%d", &n);
    int original = n;
    while(n!=0)
    {
        remainder=n%10;
        number= number*10 + remainder;
        n/=10;
    }
    if(original==number)
    {
        printf("%d is a pallindrome number", original);
    }
    else
    {
        printf("%d is not a pallindrome number", original);
    }
    return 0;
}
