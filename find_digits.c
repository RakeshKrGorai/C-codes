#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    while (n>0){
        int c= n%10;
        printf("%d ", c);
        n=n/10;
    }
    return 0;
}
