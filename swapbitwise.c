#include<stdio.h>
void main()
{
	int a=20,b=30;
	printf("before swapping :%d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swapped values :%d %d\n",a,b);
}
