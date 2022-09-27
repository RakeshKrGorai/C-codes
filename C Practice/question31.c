#include<stdio.h>
int dec2bin(int n){
    if(n==0) {
        return 1;
    }
    int x = n%2;
    dec2bin(n/2);
    printf("%d", x);
}
int main()
{
    //C Program to convert Decimal number to Binary number.
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    dec2bin(num);
    return 0;
}