#include<stdio.h>
#include<string.h>

int main()
{
    char str1[6]="Hello";
    char str2[5];
    strncpy(str2, str1, sizeof(str2));
    printf("Hey %d", sizeof(str2));
    str2[sizeof(str2)-1]= '\0';
    printf("%s",str2);
    return 0;
}
