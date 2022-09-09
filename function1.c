#include<stdio.h>

void printHello();

int main()
{
    int i=1;
    while (i<=6)
    {
        printHello();
        i++;
    }
    
    //printHello();
    return 0;
}

void printHello()
{
    printf("Hello World \n");
}