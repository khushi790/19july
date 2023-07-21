//prg to swap two values using third variable
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values:");
	scanf("%d %d",&a,&b);
	printf("value of a before swapping=%d\n",a);
	printf("value of b before swapping=%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("value of a after swapping=%d\n",a);
	printf("value of b after swapping=%d",b);
	return 0;
}
