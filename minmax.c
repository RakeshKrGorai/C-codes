#include<stdio.h>

void minmax(int arr[], int len, int *min, int *max);

int main()
{
    //Greatest and smallest with pointers
    int max, min;
    int arr[]= {32, 5, 69, 98, 12, 45};
    int len = sizeof(arr)/sizeof(arr[0]);
    minmax(arr, len, &min, &max);
    printf("Greatest %d \nMinimum %d", max, min);
    return 0;
}

void minmax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    for(int i=1; i<len; i++)
    {
        if(arr[i]>*max)
        {
            *max = arr[i];
        }
        if(arr[i]<*min) 
        {
            *min = arr[i];
        }
    }
}