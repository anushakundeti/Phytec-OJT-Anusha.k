#include<stdio.h>
void main()
{
	unsigned int x=10;
	if((x&1)==0)
	{
		printf("even");
	}
		else if((x&1)==1)
	{
		printf("odd");
	}
}
