#include<stdio.h>
int dec2oct(int num){
    if(num==0) {
        return 1;
    }
    int x = num%8;
    dec2oct(num/8);
    printf("%d", x);
}
int main()
{
    //C Program to convert Decimal number to Octal number.
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    dec2oct(num);
    return 0;
}
