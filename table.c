/*
	Program Name : table.c
	Author       : Prajwal Y P
	Program task : creae table from startnumber till endnumber for target number
*/

#include<stdio.h>

main()
{
	int tn,st,et,i;
	tn=st=et=0;
	
	printf("Enter table target number          : ");
	scanf("%d",&tn);
	printf("Enter staring number of this table : ");
	scanf("%d",&st);
	printf("Enter ending number of this table  : ");
	scanf("%d",&et);
	
	for(i=st;i<=et;i++)
		printf("\n%d * %d = %d",tn,i,tn*i);
}
