//prg to enter height of a person in centimeters and categorize the person according to their height
#include<stdio.h>
int main()
{
	int height;
	printf("enter height of person:");
	scanf("%d",&height);
	if(height>=120 && height<150)
	{
		printf("low height");
	}
	else if(height>=150 && height<180)
	{
		printf("mid height");
	}
	else if(height>=180 && height<200)
	{
		printf("high height");
	}
	else
	{
		printf("please enter valid height");
	}
}
