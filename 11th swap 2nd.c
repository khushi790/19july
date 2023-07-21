//prg to swap two values
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values:");
	scanf("%d %d",&a,&b);
	printf("value of a before swapping=%d\n",a);
	printf("value of b before swapping=%d\n",b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("value of a after swapping=%d\n",a);
	printf("value of b after swapping=%d",b);
	return 0;
}
