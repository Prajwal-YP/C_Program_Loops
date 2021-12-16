/*
	Program Name : armstrong.c
	Author       : Prajwal Y P
	Program task : Checking armstrong numbers below 1000
	
	NOTE : A number whose sum of cube of individual digits is equals o itself is known as ARMSTRONG number.
*/

#include<stdio.h>
main()
{
	int n=0,s=0,temp=0,a;
	printf("Armstrong Number from 1 to 1000 are : \n\t\t\t\t");
	
	//checking armstrong number from 1 to 1000 
	for(n=1;n<=1000;n++)
	{
		temp=n;
		//string code to check armstrong number
		while(temp!=0)
		{
			a=temp%10;
			s+=a*a*a;
			temp/=10;
		}
		//ending coding of checking armstrong number
		if(s==n)
			printf("\t%d",n);
		s=0; 
	}
	
}
