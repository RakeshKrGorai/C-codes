#include<stdio.h>
int main(int argc, char const *argv[])
{
    //C program to calculate LCM of given two numbers.
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    int max;
    max= (a>b)?a:b;     //Ternary Operator (?): used to write two simple if-else condition statement in 1 line
    while (1)
    {
        if(max%a==0 && max%b==0){
            printf("LCM of %d and %d is %d", a, b, max);
            break;
        }
        else{
            printf("LCM of %d and %d is %d", a, b, a*b);
            break;
        }
    }
    
    return 0;
}