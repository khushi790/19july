//prg to convert fahrenheit into celsius and celsius into fahrenheit
#include<stdio.h>
int main()
{
	char choice;
	printf("enter f for fahrenheit and c for celsius:");
	scanf("%c",&choice);
	if(choice=='f')
	{	
		float fahrenheit,celsius;
		printf("enter the value of celsius:");
		scanf("%f",&celsius);
		fahrenheit=(1.8*celsius)+32;
		printf("temperature in fahrenheit: %f",fahrenheit);
	}
	else if(choice=='c')
	{	
		float fahrenheit,celsius;
		printf("enter the value of fahrenheit:");
		scanf("%f",&fahrenheit);
		celsius = ((fahrenheit-32)*5)/9;
		printf("temperature in fahrenheit: %f",celsius);
	}
	else 
	{
		printf("please enter valid number.....");
	}
	return 0;
}
