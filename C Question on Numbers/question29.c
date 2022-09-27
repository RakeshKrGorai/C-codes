#include<stdio.h>
int main()
{
    //C Program to find GCD or HCF of two numbers.
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    int counter;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            counter=i;
        }
    }
    printf("HCF of %d and %d is %d", a, b, counter);
    return 0;
}