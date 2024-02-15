#include<stdio.h>
void binary(unsigned int a)
{
	int i;
	for(i=31;i>=0;i--)
	{
		if(a&(0x1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
void main()
{
	int n;
	printf("enter decimal number\n");
	scanf("%d",&n);
	binary(n);
}









/*#include<stdo.h>
 * void binary(unsigned int a)
 * {
 * int i;
 * for(i=31;i>0;i--)
 * {
 * if(a&(0x1<<i))
 * printf("1");
 * else
 * printf("0");
 * }
 * printf("\n");
 * }
 * void main()
 * {
 * int n;
 * printf("enter a number\n");
 * scanf("%d",&n);
 * binary(n);
 * }*/
