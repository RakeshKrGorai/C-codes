#include<stdio.h>

int printSum(int n);
int sum=0;

int main()
{
    //Write a program in C to find sum of digits of a number using recursion.
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    printSum(n);
    printf("The sum of digits is %d", sum);
    return 0;
}

int printSum(int n)
{
    if (n>0)
    {
        int counter = n%10;
        sum+=counter;
        n/=10;
        printSum(n);
    }
    return sum;
    

}
