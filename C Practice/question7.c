#include<stdio.h>

int pallindrome(int n);
int n, original, reverse, remains;

int main()
{
    //Write a program in C to check whether a number is palindrome or not using recursion.
    printf("Enter any number : ");
    scanf("%d", 
    &n);
    original= n;
    pallindrome(n);
    return 0;
}

int pallindrome(int n)
{
    if(n>0)
    {
        remains = n%10;
        reverse = reverse*10 + remains;
        n/=10;
        if(n==0)
        {
            if(original == reverse)
            {
                printf("%d is a pallindrome number ", original);
            }
            else
            {
                printf("%d is not a pallindrome number", original);
            }
        }
        else
        {
            pallindrome(n);
        }
    }    
}