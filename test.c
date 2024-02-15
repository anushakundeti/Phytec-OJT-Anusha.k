#include<stdio.h>
int retu(float *ptr,int size)
{
	int i,x;
	for(i=0;i<size;i++)
	{
	printf("%d\n",(*ptr+i));
	x=*ptr++;
	}
	return x;
}
int main()
{
	int x[4]={1,1,1,1};
	printf("%d\n",retu(x,10));
	return 0;
}
