#include<stdio.h>
int main()
{
    //C Program to check a given number is even or odd.
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("%d is an even no",n);
    }
    else
    {
        printf("%d is an odd no", n);
    }
    
    return 0;
}
