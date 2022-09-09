#include<stdio.h>
int n, temp, i=0, temp1=1;
void main()
{
    //C program to print first n Prime Number with explanation.
    printf("Enter value of n : ");
    scanf("%d", &n);
    while(temp1<=n)
    {
        temp=0;
        for(i=2; i<=(temp1/2); i++)
        {   
            if (temp1%i==0)
            {
                temp=1;
                break;
            }
        }
    if(temp==0)
    {
        printf("%d is a prime number \n", temp1);
        temp1++;
    }
    }  

}