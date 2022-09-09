#include<stdio.h>
#include<string.h>

int main()
{
    char str1[6]="Hello";
    char str2[5];
    strcpy(str2, str1);
    str2[sizeof(str2)-1]= '\0';
    printf("%s",str2);
    return 0;
}
