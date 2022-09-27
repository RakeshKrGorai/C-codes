#include<stdio.h>

int main()
{
    //Write a program in C to check whether an integer is Armstrong number or not.
    int number;
    int counter;
    int sum;
    printf("Enter a number : ");
    scanf("%d",&number);
    int number1 = number;
    while(number>0)
    {
        counter=number%10;
        sum+=counter*counter*counter;
        number=number/10;
    }
    if(number1==sum)
    {
        printf("Angstrom Number");
    }
    else{
        printf("Not an Angstrom number");
    }
    return 0;
}
