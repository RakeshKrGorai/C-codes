#include <stdio.h>

int printFactorial(int);

int main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d", &n);
	//int fctrl=printFactorial(n);
	printf("THe value is %d", printFactorial(n));
	return 0;
}

int printFactorial(int n){
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n* printFactorial(n-1);
	}
}
