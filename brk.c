/*
	Program Name : brk.c
	Author       : Prajwal Y P
	Program Task : adding all +ve N numbers
*/

#include<stdio.h>
main()
{
	int i=0,n=0,s=0;
	
	for(i=0;;i++)
	{
		printf("Enter a number(0/-ve number to terminate) : ");
		scanf("%d",&n);
		if(n<1)
		{
			printf("Program Terminated !!!!");
			printf("\n\n\t\tTotal number of inputs : %d",i);
			printf("\n\t\tSum of %d numbers      : %d",i,s);
			break;
		}
		s+=n;
	}
}
