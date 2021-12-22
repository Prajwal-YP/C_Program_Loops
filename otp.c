/*
	Program Name : otp.c
	Author       : Prajwal Y P
	Program Task : Mobile OTP Verification using rand(),time() and srand() 
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	long long n;
	int i,otp=0,cnt=0,num;
	srand(time(0));
	printf("Enter Mobile number : ");
	scanf("%lld",&n);
	for(;n>0;n/=10)
		cnt++;
	if(cnt!=10)
	{
		printf("Invalid Mobile number !!!");
		exit(0);
	}
	otp+=(rand()%9)+1;
	for(i=0;i<5;i++)
	{
		otp=(otp*10)+rand()%10;
	}
	printf("\n(OTP is %d)",otp);
	printf("\nEnter 5-digit OTP that is sent to your mobile : ");
	scanf("%d",&num);
	if(otp==num)
		printf("Registration of your Mobile Successful.");
	else
		printf("Resgitration of your mobile through otp failed");
}
