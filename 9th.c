//prg to check a character in lowercase or uppercase
#include<stdio.h>
int main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	if(c>='a' && c<='z')
	{
		printf("lowercase");
	}
	else if(c>='A' && c<='Z')
	{
		printf("uppercase");
	}
	else 
	{
		printf("enter valid input");
	}
	return 0;
}
