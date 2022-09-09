#include<stdio.h>

int printArray(int);
int array[]={0};
int n;
int i=0;

int main()
{
    printf("Enter number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("Enter %d ",&array[i]);
    }
    printArray(n);
    return 0;
}

int printArray(int n)
{
    
    if (i<=n)
    {
        printf("%d ", array[i]);
    }
    printArray(i+1);

}
