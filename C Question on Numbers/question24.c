#include<stdio.h>
int main()
{
    //C Program to calculate the power without using POW function.
    int n, x, p=1, val=1;
    printf("Enter any number : ");
    scanf("%d", &n);
    printf("Power : ");
    scanf("%d", &x);
    while(p<=x){
        val*=n;
        p++;
    }
    printf("%d to the power %d is %d", n, x, val);
    return 0;
}
