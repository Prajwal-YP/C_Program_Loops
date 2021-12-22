/*
	Program Name : Perfectno.c
	Author       : Prajwal Y P
	Program Task : Finding perfect number(number which is equal to the sum of it's factors) 
*/

#include<stdio.h>
main()
{
	int n,i,s=0;
	
	for(n=1;n<101;n++)
	{
		printf("\n\nFactors of number-%d are : ",n);
		
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				printf(" %d",i);
				s+=i;
			}
		}
		if(s==n)
			printf("\n\t\t%d is a perfect number..",n);

		s=0;
	}
}
