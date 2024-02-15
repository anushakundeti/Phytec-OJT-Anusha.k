#include<stdio.h>
void main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0))
		printf("leap year\n");
	else if(year%100==0)
		printf("not a leap year\n");
	else
		printf("not a leap year\n");
}
