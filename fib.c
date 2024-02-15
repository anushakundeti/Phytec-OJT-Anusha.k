#include<stdio.h>
void main()
{
	int a=0,b=1,n,i=1,c=0;
	printf("enter n value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
}
