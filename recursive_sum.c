#include<stdio.h>

int printSum(int);



int main()
{
	//to print sum of n numbers in c
	int sum;
	int n;
	printf("Enter value of n for sum : ");
	scanf("%d",&n);
	sum = printSum(n);
	
	printf("The sum is %d",sum);
	return 0;
}

int printSum(int n)
{
	int counter;
	if(n==1){
		return 1;
	}
	else{
		counter =n+ printSum(n-1);
	
	}
	return counter;
}
