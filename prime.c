#include<stdio.h>
void main()
{
	int i,j,c=0,n;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
	
			if(c==0&&i!=1)
				printf("%d\n",i);
		c=0;
		
	}
}





























/*{
	int i,j,range,count;
	printf("enter the range :");
	scanf("%d",&range);
	for(i=2;i<range;i++)
	{
		count=0;
		for(j=1;j<range;j++)
		{
			if(i%j==0)
				count++;
		}
	
	if(count==1)
	{
		printf("%d\n",i);
	}
}
}*/
