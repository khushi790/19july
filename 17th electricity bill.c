//prg to calculate how much bill paid
#include<stdio.h>
int main()
{
	int units,total;
	printf("enter number of unit:");
	scanf("%d",&units);
	if(units>=1 && units<=10)
	{
		printf("bill paid 10 percentage");
	}
	else if(units>=11 && units<=20)
	{
		printf("bill paid 15 percentage");
	}
	else if(units>=21 && units<=40)
	{
		printf("bill paid 30 percentage");
	}
	else if(units==50)
	{
		printf("bill paid 50 percentage");
	}
	else
	{
		printf("fully paid");
	}
	return 0;
}
