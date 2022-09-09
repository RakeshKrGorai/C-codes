#include<stdio.h>

int printResult(a,b);
#define max 30
int arow,acolumn,brow,bcolumn;
//int i=0,j=0,k=0;
int a[max][max], b[max][max], c[max][max];
int sum=0;

int main()
{
    //For Matrix 1
    printf("Enter rows and columns for Matrix A : ");
    scanf("%d %d", &arow , &acolumn);

    printf("Enter elements of matrix :  \n");
    for(i=0;i<arow;i++)
    {
        for (j=0;j<acolumn;j++)
        {
            printf("Element at %d-%d place : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    //For Matrix 2
    printf("Enter rows and columns for Matrix B : ");
    scanf("%d %d", &brow , &bcolumn);
    if(brow!=acolumn)
    {
        printf("Cannot multiply");
    }
    else
    {
        printf("Enter elements of matrix :  \n");
        for(i=0;i<brow;i++)
        {
            for (j=0;j<bcolumn;j++)
            {
                printf("Element at %d-%d place : ", i,j);
                scanf("%d", &b[i][j]);
            }
        }
    }
    printResult(a,b);
}

int printResult(a,b)
{
    int i=0,j=0,k=0;
    if(i<arow)
    {
        if(j<bcolumn)
        {
            if(k<brow)
            {
                sum+= a[i][k]*b[k][j];
                k++;
                printResult(a,b);
            }
        }
    }
   
}