/*
	Program Name : Strongno.c
	Author       : Prajwal Y P
	Program Task : Finding strong number from 1 to 1000 
*/

#include<stdio.h>
main()
{
	int n,f=1,r,tmp,s=0;
	printf("Strong numbers below 1000 are :");
	
	for(n=1;n<99999;n++)
	{
		tmp=n;
		//printf("\n\n\nNumber- %d\n",tmp);
		while(tmp>0)
		{
			r=tmp%10;
			//printf("\nremainder- %d",r);
			for(;r>1;r--)
			{
				f*=r;
			}
			//printf("\nfactorial- %d",f);
			s+=f;
			//printf("\nsum- %d",s);
			tmp/=10;
			f=1;
		}
		
		if(n==s)
			printf("\n%d is a strong Number.",n);
		s=0;
	}
}
