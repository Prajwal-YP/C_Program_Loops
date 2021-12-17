/*
	Program Name : fibonacci.c
	Author       : Prajwal Y P
	Program Task : To find a fibonacci number from till 100
*/

#include<stdio.h>
main()
{
	int a=0,b=1,c=1;
	while(c<101)
	{
		printf("\t%d",c);
		c=a+b;
		a=b; b=c;
	}
}
