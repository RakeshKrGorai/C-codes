#include<stdio.h>
int main()
{
    //Write first program in C to print the Fibonacci series using iteration.
    int first=1, second=0, n, sum=0;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("%d ", first);
    for(int i=0; i<=n; i++)
    {
        sum= first+second;
        printf("%d ", sum);
        second = first;
        first = sum;
        
    }
    return 0;
}
