#include<stdio.h>

int printFact(int n), n, fact=1;
int main()
{
    //C Program to calculate factorial using recursion.
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d ", n, printFact(n));
    return 0;
}

int printFact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*printFact(n-1);
    }
}