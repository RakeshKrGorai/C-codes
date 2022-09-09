#include<stdio.h>

int findDigits(int);
int n;
int counter=0;
int main()
{
    //Print digits using recursion
    printf("Enter number : ");
    scanf("%d", &n);
    findDigits(n);
    return 0;
}
int findDigits(int n){
    if (n>0){
        printf("%d \n",n%10);
        n=n/10;
        counter++;
        findDigits(n);
        return counter;
    }
    printf("Total Digits  : %d ", counter);
}