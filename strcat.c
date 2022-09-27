#include<stdio.h>
#include<string.h>
int main()
{
    //It appends the content of string 2 at the end of string 1. It returns the pointer to the resulting string1
    //Prototype     char* strcat(char* str1, const char* str2);
    char str1[]= "Hello ";
    char str2[]= "World";
    printf("%s", strcat(str1, str2));
    
    return 0;
}