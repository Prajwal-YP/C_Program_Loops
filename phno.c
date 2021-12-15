/*
	Program Name : phno.c
	Author       : Prajwal Y P
	Program task : verify valid phone number using loop
*/

#include<stdio.h>

main()
{
	long long int n=0;
	int c=0;
	printf("Enter your Phone Number : +91 ");
	scanf("%lld",&n);
	while(n!=0)
	{
		n/=10;
		c++;
	}
	if(c==10)
		printf("\n\t\tValid phone number ...");
	else
		printf("\n\t\tInvalid phone number !!!");
}
