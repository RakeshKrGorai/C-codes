#include<stdio.h>

int main()
{
    //Write a program in C to check given number is perfect or not.
    int n, sum;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
    return 0;
}
    