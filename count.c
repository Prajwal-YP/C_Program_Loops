/*
	Program Name : COUNT.c
	Author       : Prajwal Y P
	Program Task : COUNTING NUMBER FROM 1 TO N
*/

#include<stdio.h>
main()
{
	int no=0,count=1;
	
	printf("Enter a no...: ");
	scanf("%d",&no);
	
	while(count<=no)
	{
		printf("\t%d",count);
		count++;
	}
}
