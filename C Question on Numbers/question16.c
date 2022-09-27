#include<stdio.h>
int main()
{
    //Avg of numbers
    int n, counter, sum, avg;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter : ");
        scanf("%d",&counter);
        sum+=counter;
    }
    avg= sum/n;
    printf("The average of the given numbers is :  %d", avg);
    return 0;
}
