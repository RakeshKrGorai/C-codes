#include<stdio.h>
struct {
    char *engine;
} car1, car2;
int main()
{
    car1.engine="ghjkbl";
    car2.engine="zxcvv";
    printf("%s \n%s", car1.engine,car2.engine);
    return 0;
}
