#include<stdio.h>
int main()
{
    //printing table of user input number
    int input;
    printf("Enter your number : ");
    scanf("%d", &input);
    //printf("The input value is %d", input);
    for(int i=1;i<=10;i++)
    {
        printf("%d \n",input*i);
    }
    return 0;
}