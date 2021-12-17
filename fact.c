/*
	Program Name : fact.c
	Author       : Prajwal Y P
	Program Task : To find a factorial of a number using loops
*/

#include<stdio.h>
main()
{
	int n=1,f=1,i;
	
	while(1)
	{
		printf("\n\nEnter number(o/-ve number to exit) : ");
		scanf("%d",&n);
		if(n<1)
			break;
		for(i=2;i<=n;i++)
			f*=i;
		printf("\t\t\t\tFactorial of %d : %d",n,f);
		f=1;
	}
	printf("\nFactorial of %d : %d\n\t\tProgram Terminated",n,f);
}
