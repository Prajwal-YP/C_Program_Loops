/*
	Program Name : lucky.c
	Author       : Prajwal Y P
	Program Task : To find lucky number using loop
*/

#include<stdio.h>
main()
{
	long int n;
	int s,r;
	n=s=r=0;
	
	printf("Enter a number : ");
	scanf("%ld",&n);
	printf("Inputed Number : %ld",n);
	while(n>9)
	{
		while(n!=0)
		{
			r=n%10;
			s+=r;
			n/=10;
		}
		printf("\n\nSum of upper digit   : %d",s);
		n=s;
		s=0;
	}
	printf("\n\n\t\t\tLucky number   : %ld",n); 
}
