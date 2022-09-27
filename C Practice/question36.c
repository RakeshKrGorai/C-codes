#include<stdio.h>
int main()
{
    //C program to calculate Simple Interest with explanation.
    float principal;
    float rate;
    float time;
    printf("Enter Principal Amount : ");
    scanf("%f", &principal);
    printf("Enter rate of interest : ");
    scanf("%f", &rate);
    printf("Enter time : ");
    scanf("%f", &time);
    float simple_interest = principal*rate*time*0.01;
    printf("Simple Interest for the given data is %.2f", simple_interest);
    return 0;
}
