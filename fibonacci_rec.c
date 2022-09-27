#include<stdio.h>
 
int term;
int fibonacci(int prNo, int num);
 
void main() 
{
   static int prNo = 0, num = 1; 
   printf(" Input n : ");
   scanf("%d", &term);
   printf("\n"); 
   printf(" 1  ");
   fibonacci(prNo, num);
   printf("\n\n");
}
int fibonacci(int prNo, int num) 
{
   int i = 1;
   int nxtNo;
   if (i == term){
      return (0);
   }
   else 
   {
      nxtNo = prNo + num;
      prNo = num;
      num = nxtNo;
      printf("%d  ", nxtNo);
      i++;
      fibonacci(prNo, num); //recursion, calling the function fibonacci itself
   }
   return (0);
}