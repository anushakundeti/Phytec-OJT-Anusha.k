#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,min=0,max=0;
	int arr[100];
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min=max=arr[0];
	
	for(i=0;i<n;i++)
	{
	if(min>arr[i])
		min=arr[i];
	if(max<arr[i])
		max=arr[i];
	}
	printf("min=%d\nmax=%d\n",min,max);
}

