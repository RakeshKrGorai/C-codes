#include<stdio.h>
#include<string.h>
int main()
{
    /*Safer version of strcat.
    It appends limited number of characters specified by the third argument passed to it.
    It automatically adds null Characters at the end of the resultant string.*/
    char str1[]= "Hello ";
    char str2[]= "World";
    printf("%s", strncat(str1, str2,sizeof));
    
    return 0;
}