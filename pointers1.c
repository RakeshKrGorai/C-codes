#include<stdio.h>

int main()
{
  int i =10;
  int *p =&i;
  printf("Address %p", p); //Hexadecimal
  printf("\n%d", *&i); //Decimal
  return 0; 
}
