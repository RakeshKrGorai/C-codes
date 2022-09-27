#include<stdio.h>
int gcd_rec(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd_rec(b, a%b);
}
int main()
{
    //C Program to find GCD of two numbers using recursion.
    int a, b;
    int i=1;    
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("HCF of %d and %d is %d", a, b, gcd_rec(a,b));
    return 0;
}