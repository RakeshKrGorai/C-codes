#include<stdio.h>
int main()
{
    //Checking Odd Even
    int input;
    printf("Enter any number to check: ");
    scanf("%d",&input);
    if(input%2==0)
    {
        printf("%d is an even number",input);
    }
    else
    {
        printf("%d is an odd number",input);
    }
    return 0;
}