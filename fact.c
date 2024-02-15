#include<stdio.h>
void main()
{
	int fact=1,n=5,i=1;
	do
	{
		fact=fact*i;
	        i++;	
	}while(i<=n);
	printf("%d",fact);
}

