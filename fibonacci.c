#include<stdio.h>
int main()
{
    int a, b, result, n, i;
    printf("Enter n : ");
    scanf("%d", &n);
    a=0;
    b=1;
    for(i=0;i<=n;i++){
        printf("%d ", a);
        result=a+b;
        a=b;
        b=result;
    }
    return 0;
}

