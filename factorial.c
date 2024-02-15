#include<stdio.h>
void main()
{
	 int n,i=1;
	int fact=1;
	printf("enter number\n");
	scanf("%d",&n);
	if(n<0)
	{
		printf("negative inters not valid\n");
		exit(1);
	}


	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("%d\n",fact);
}
