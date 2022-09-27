#include<stdio.h>
#include<math.h>
int main()
{
    //C program to calculate the power using the POW method.
    int n, x;
    printf("Enter any number : ");
    scanf("%d", &n);
    printf("Power : ");
    scanf("%d", &x);
    int p= pow(n,x);
    printf("%d to the power %d is ", n, x, p);
    return 0;
}
