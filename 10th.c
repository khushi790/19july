//prg to check a number is divisible by bpth 7 and 3 
#include<stdio.h>
int main()
{
	int num;
	printf("enter value:");
	scanf("%d",&num);
	if(num>0 || num<0)
	{
		if(num%7==0 && num%3==0)
		{
			printf("number is divisible");
		}
		else 
		{
			printf("number is not divisible");
		}
	}
	else
	{
		printf("enter valid input");
	}
	return 0;
}
