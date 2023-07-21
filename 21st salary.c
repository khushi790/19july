//prg to check how much salary is deducted for holidays
#include<stdio.h>
int main()
{
	int holidays,sal;
	printf("enter the no. of holidays:");
	scanf("%d",&holidays);
	printf("enter sal:");
	scanf("%d",&sal);
	if(holidays==1)
	{
		printf("full salary");
	}
	else if(holidays>=2 && holidays<=5)
	{
		printf("your salary is 5per deducted");
	}
	else if(holidays>5 && holidays<=14)
	{
		printf("your salary is 10per deducted");
	}
	else if( holidays==15)
	{
		printf("your salary is 50per deducted");
	}
	else
	{
		printf("not salary");
	}
}
