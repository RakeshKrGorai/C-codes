#include<stdio.h>

int main()
{
    //Write a program in C to check given number is prime or not.
    int number;
    int counter=0;
    printf("Enter a number to check whether its prime or not : ");
    scanf("%d",&number);
    if (number>0)
    {
        for(int i=2; i<number; i++)
        {
            
            if (number%i==0)
            {
                counter+=1;
            }
        }
        if(counter>0)
        {
            printf("Not a prime number");
        }
        else
        {
            printf("Prime number");
        }
    }

    return 0;
}
