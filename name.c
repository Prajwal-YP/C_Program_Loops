/*
	Program Name : name.c
	Auhor        : Prajwal Y P
	Program ask  : print inputted Name Length Number of times
*/

#include<stdio.h>
#include<string.h>
main()
{
	char n[30];
	int i=0;
	printf("Enter you name : ");
	scanf("%[^\n]",&n);
	for(i=0;i<strlen(n);i++)
		printf("\n%d. %s",i+1,n);
}
