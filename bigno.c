/*
	Program Name : bigno.c
	Author       : Prajwal Y P
	Program Task : Checking biggest, second biggest and smallest number in the guven 10 numbers
*/

#include<stdio.h>
main()
{
	int n,count,b1,b2,s;
	n=b1=b2=0;
	s=999999999;
	
	//Checking biggest, second biggest and smallest number in the guven 10 numbers
	for(count=0;count<10;count++)
	{
		printf("\nEnter the positive value of number-%d : ",count+1);
		scanf("%d",&n);
		if(n>b1)
		{
			b1=n;
		}
		else if( (n>b2) && (n!=b1) ) //this logical condition is if there exists two same large numbers
		{
			b2=n;
		}
		else if(n<s)
		{
			s=n;
		}
	}
	
	printf("\n\nFrom the above following 10 numbers :");
	printf("\n\t\t\tBiggest number ........... : %d",b1);
	printf("\n\t\t\tSecond Biggest number .... : %d",b2);
	printf("\n\t\t\tSmallestest number ....... : %d",s);
}
