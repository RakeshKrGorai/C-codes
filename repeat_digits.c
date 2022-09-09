#include<stdio.h>
int main()
{
    //Finding Repeated Digits in a user entered number
    int array[10]={0};
    int number;
    int i;
    printf("Enter Your Number to be checked : ");
    scanf("%d", &number);
    while (number!=0)
    {
        int counter = number%10;
        if(array[counter]==1){
            break;
        }
        array[counter]=1;
        number=number/10;
        
    }
    if (number>0){
        printf("Yes");

    }
    else{
        printf("No");
    }
    // for(i=0;i<10;i++){
    //     if (array[i]==1){
    //         printf("%d ", array[i]);
    //     }
    //     else{
    //         printf("None");
    //     }
    // }
    return 0;
}
