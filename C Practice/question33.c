#include<stdio.h>
int main()
{
    //C Program to check the given year is a leap year or not.
    int year;
    printf("Enter any year : ");
    scanf("%d", &year);
    if (year%400==0){
        printf("Given year %d is a leap year.", year);
    }
   else if(year%4==0 && year%100!=0){
        printf("Year %d is a leap year.", year);
    }
    else if(year%100==0){
        printf("Year %d is not a leap year.", year);
    }
    else{
        printf("Year %d is not a leap year.", year);
    }
    return 0;
}
