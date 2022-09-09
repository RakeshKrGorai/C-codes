#include<stdio.h>

int odd();
int even();
int n=1;
int main()
{
	//print nos from 1-10 with 1 added to odd nos and 1 subtracted from even nos
	odd();
	return 0;
}
int odd()
{
	if (n<=10)
	{
		printf("%d ", n+1);
		n++;
		even();
	}
	return;
}
int even()
{
	if (n<=10)
	{
		printf("%d ",n-1);
		n++;
		odd();
	}
	return;
}


