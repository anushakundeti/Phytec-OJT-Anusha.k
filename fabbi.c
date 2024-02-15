#include<stdio.h>
void main()
{
	int n=10,a=0,b=1,c=0;
	while(c<=n)
	{
		printf("fabbi=%d\n",c);
		a=b;
		b=c;
		c=a+b;
		
	}
	//printf("fabbi=%d\n",c);
}

