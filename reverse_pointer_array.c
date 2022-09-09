#include<stdio.h>
#define N 5
int main(){
    int a[N], *p;
    for(p=a;p<=a+N-1; p++){
        printf("Enter %d elements of array : ", N);
        scanf("%d", p);
    }
    printf("Elements in reverse order: \n");
    for(p=a+N-1;p>=a;p--){
        //p=&a[0];
        printf("%d ", *p);
    }
    return 0;
}