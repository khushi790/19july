//prg to check a character is alphabet or digit
#include<stdio.h>
int main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	if(c>='a' && c<='z' || c>='A' && c<='Z')
	{
		printf("it is alphabet");
	}
	else
	{
		printf("it is digit");
	}
	return 0;
}
