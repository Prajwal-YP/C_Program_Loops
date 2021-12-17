/*
	Program Name : fact.c
	Author       : Prajwal Y P
	Program Task : To find a factorial of a number using loops
*/

#include<stdio.h>
main()
{
	int n,f=1,i;
	printf("Enter number : ");
	scanf("%d",&n);
	
	if(n<1)
	{
		printf("Factorial of %d : %d",n,f);
	}
	else 
	{
		for(i=2;i<=n;i++)
			f*=i;
		printf("Factorial of %d : %d",n,f);
	}
}
