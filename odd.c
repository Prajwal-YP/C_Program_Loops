/*
	Program Name : odd.c
	Auhor        : Prajwal Y P
	Program ask  : print odd number using loops
*/

#include<stdio.h>
main()
{
	int n=1,tn=0;
	
	printf("Enter arge number : ");
	scanf("%d",&tn);
	//Do-While Loop
	printf("\nOdd number till %d, using Do-While-Loop :",tn);
	do
	{
		if(n%2==1)
			printf("\n%d",n);
		n++;
	}while(n<=tn);
	
	//For-Loop
	printf("\nOdd number till %d, using For-Loop :",tn);
	for(n=1;n<=tn;n+=2)
		printf("\n%d",n);  
}
