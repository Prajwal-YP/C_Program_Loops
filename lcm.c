/*
	Program Name : lcm.c
	Author       : Prajwal Y P
	Program Task : Finding LCM of 2 numbers 
*/

#include<stdio.h>
main()
{
	int a,b,l;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	
	for( l=(a>b?a:b) ; l<=(a*b) ; l=l+(a>b?a:b) )
	{
		if( (l%a==0) && (l%b==0) )
			break;
	}
	printf("LCM of %d and %d is %d",a,b,l);
}
