#include<stdio.h>
int main()
{
    int arr[]= {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i;
    //Original Order
    for(i=0;i<9;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Reverse Order
    for(i=8;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
