#include<stdio.h>
int main()
{
	int pcs;
	char choice;
	printf("enter choice:");
	scanf("%c",&choice);
	if(choice=='r')
	{
		printf("retailer\n");
		printf("enter number of pieces:");
		scanf("%d",&pcs);
		if(pcs>=1 && pcs<=15)
		{
			printf("discount 15per\n");
		}
		if(pcs>=16 && pcs<=30)
		{
			printf("discount 30per");
		}
	}
	else if(choice=='c')
	{
		printf("customer\n");
		printf("enter amount:");
		scanf("%d",&amt);
		if(amt>=1000 && amt<=2000)
		{
			printf("discount 10per");
		}
		if(amt>=100 && amt<=1000)
		{
			printf("discount 5per");
		}
		if(amt>=2000 && amt<=3000)
		{
			printf("discount 15per");
		}
		if(amt>=3000)
		{
			printf("discount 30per");
		}
	}
	return 0;
	
}
