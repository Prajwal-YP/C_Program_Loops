/*
Write a program to read single input from the user till the user enters 0 and display the report as

-->No of Upper case letters
-->No of Lower case Letter
-->No of Digits
-->No of Special characters
-->Display all the factors of a positive integer with the count.
*/
/*
	Program Name: Character_Report.c
	Author		: Prajwal Y P
	Program Task: To generate report on character based on above condition
*/
#include<stdio.h>
main()
{
	int c,uc=0,lc=0,dc=0,sc=0;
	while(-1)
	{
		printf("\nEnter the character : ");
		fflush(stdin);
		scanf("%c",&c);
		if(c=='0')
			break;
		else if(c>=65 && c<=90)
			uc++;
		else if(c>=97 && c<=122)
			lc++;
		else if(c>=48 && c<=57)
			dc++;
		else
			sc++;				
	}
	printf("\n\nReport of your Characters\n----------------------------------------");
	printf("\n1.No of Upper case letters: %d\n2.No of Lower case Letters : %d\n3.No of Digits : %d\n4.No of Special characters : %d\n-------------------------------------------",uc,lc,dc,sc);
}
