#include<stdio.h>
int main(){
    int A;
    do
    {
        printf("Enter Your Number: ");
        scanf("%d", &A);
        if (A % 7 != 0)
        {
            printf("OOPS!!! You entered the wrong multiple of 7. \n");
        }
        else {
          break;
        }
        
    } while (1);
    printf("Thank You");
    return 0;
    
}