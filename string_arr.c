#include<stdio.h>
#include<string.h>
int main()
{
    char *fruits[] = {"2 Oranges", "2 Apples","3 bananas","1 Pineapple"};
    if(strcmp(fruits[1], fruits[2])<0)
        printf("%s less %s",fruits[1], fruits[2]);
    else if(strcmp(fruits[1], fruits[2])>0)
        printf("%s greater %s", fruits[1], fruits[2]);
    return 0;
}
