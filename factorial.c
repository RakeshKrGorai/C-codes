#include<stdio.h>
int main()
{
    //printing factorial of a digit
    int input;
    printf("Enter any number");
    scanf("%d", &input);
    int counter= 1;
    for(int i=1;i<=input;i++)
    {
        counter=counter*i;
    }
    printf("Factorial of %d is %d", input, counter);
    return 0;
}