#include<stdio.h>
int main()
{
    //checking whether a number is divisible by 21
    int value;
    printf("Enter any number: ");
    scanf("%d",&value);
    if(value%21==0)
    {
        printf("Divisible by 21");
    }
    else
    {
        printf("Not divisble by 21");
    }
    return 0;
}
