#include<stdio.h>
int main()
{
    //To print reverse of user input integer
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    printf("before reverse : %d \n", n);
    printf("after reverse : ");
    while (n>0)
    {
        int rev=n%10;
        printf("%d", rev);
        n=n/10;  
    } 
    return 0;
}
