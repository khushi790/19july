//prg to enter 5 subject marks and calculate percentage and grade
#include <stdio.h>
int main()
{
    int h,e,m,c,s; 
    float total,per;
    printf("Enter marks of five subjects: \n");
    scanf("%d %d %d %d %d",&h,&e,&m,&c,&s);
    total = h+e+m+c+s;
    per= (total / 500.0) * 100;
    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f\n", per);
	if(per<=25)
	{
		printf("fail");
	}
	else if(per>25 && per<=45)
	{
		printf("E grade");
	}
	else if(per>45 && per<=50)
	{
		printf("D grade");
	}
	else if(per>50 && per<=60)
	{
		printf("C grade");
	}
	else if(per>60 && per<=80)
	{
		printf("B grade");
	}
	else
	{
		printf("A grade");
	}
    return 0;
}



