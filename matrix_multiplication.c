#include<stdio.h>
#define max 30

int arow,acolumn,brow,bcolumn;
int i,j,k;
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

    //Matrix Multiplication
    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            for(k=0;k<brow;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    //Print Matrix
    printf("Resultant Matrix \n");
    for(i=0;i<arow;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}


