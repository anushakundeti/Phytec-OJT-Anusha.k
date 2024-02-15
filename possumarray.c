#include<stdio.h>
#include<stdlib.h>
void array(int arr[])
{
	int sum=0;
	int n,pos;
	printf("enter pos\n");
	scanf("%d",&pos);
	for(int i=pos;i<n;i++)
	{
			sum=sum+arr[i];
	
	}
	printf("%d",sum);
}
void main()
{
	int n=6;
	int arr[n];
	printf("enter elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	array(arr);
}



