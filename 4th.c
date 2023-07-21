//prg to find maximum of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b &&a>c)
	{
		printf("a is max");
	}
	else if(b>a && b>c)
	{
		printf("b is max");
	}
	else if(c>a && c>b)
	{
		printf("c is max");
	}
	else
	{
		printf("values are equal");
	}
	return 0;
}
