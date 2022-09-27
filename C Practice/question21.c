#include<stdio.h>
int main()
{
    //C Program to print Prime Number in a given range
    int first, last;
    printf("Enter first value of range : ");
    scanf("%d", &first);
    printf("Enter last value of range : ");
    scanf("%d", &last);
    int counter=2, counter2;
    for(first;first<=last;first++)
    {
        for(counter;counter<first;counter++)
        {
            if(first%counter==0){
                counter2+=1;
                continue;
            }
        }
        if(counter2==0){
            printf("%d is a prime no \n", first);
        }
        counter=2;
        counter2=0;
    }
    return 0;
}
