#include<stdio.h>
int main()
{
    //Write a program in C to find prime factors of a given integer.
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}
