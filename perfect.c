#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{

			sum=sum+i;
		}
	}
	if(n==sum)
	
		printf("pn\n");
	
	
	else
		printf("not pn\n");
	
}
