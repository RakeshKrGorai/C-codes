#include<stdio.h>
int main()
{
    //C Program to find Smallest number among three.
    int i,j,k, counter;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &i, &j, &k);
    counter=i;
    if(i>j){
        counter=j;
    }
    if(j>k){
        counter=k;
    }
    printf("Smallest number is %d", counter);
    return 0;
}
