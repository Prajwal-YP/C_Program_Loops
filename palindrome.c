/*
	Program Name : palindrome.c
	Author       : Prajwal Y P
	Program Task : palindrome checking program using loop's concept
*/

#include<stdio.h>
main()
{
	int n,m,rev;
	n=rev=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	m=n;
	
	while(n!=0)
	{
		rev=(n%10)+rev*10;
		n/=10;
	}
	if(m==rev)
		printf("\n\t\tEntered number is a Palindrome");
	else
		printf("\n\t\tEntered number is not a Palindrome");
}
