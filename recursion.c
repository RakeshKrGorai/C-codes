#include<stdio.h>

int printNumbers(int);
int main()
{
    int n=1;
    printNumbers(n);
    return 0;
}

int printNumbers(int n)
{
    if(n<=50)
    {
        printf("%d \n",n);
        printNumbers(n+1);
    }
}