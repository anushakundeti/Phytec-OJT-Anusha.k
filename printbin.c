#include<stdio.h>
void main()
{
	unsigned int x;
	int i;
	printf("enter a number\n");
	scanf("%d",&x);
	for(i=31;i>=0;i--)
	{
		if(x&(0x1<<i))
		{
			printf("1");}
		else{
			printf("0");}
	}
	printf("\n");

	
}


