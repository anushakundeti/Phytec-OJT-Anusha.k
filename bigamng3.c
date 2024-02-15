#include<stdio.h>
void main()
{
	int a=50,b=49,c=48,l=0;
	if(a>b)
	{
		if(a>c)
		{
			l=a;
			//printf("l=%d\n",l);
		}
		else
		{
			l=c;
			//printf("l=%d\n",l);
	}
	}
	else
	{
		if(b>c)
		{
			l=b;
			//printf("l=%d\n",l);
		}
		else
		{
			l=c;
			//printf("l=%d\n",l);
	}
	}
	printf("large=%d\n",l);
}

