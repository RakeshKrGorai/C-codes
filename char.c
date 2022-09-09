#include<stdio.h>

int main()
{
	//-128 aur 128 m same characters print krega, -127 aur +129 same characters print krega and so on
	char var = -128;
	printf("%c"	, var);
	return 0;	
}
