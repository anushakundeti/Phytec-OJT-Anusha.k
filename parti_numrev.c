#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	int i,j,n,pos=0,temp;
	int arr[n];
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter position\n");

	
	scanf("%d",&pos);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==pos)
		{
			temp=arr[i+1];
			arr[i+1]=arr[n-1];
			arr[n-1]=temp;
		}
	}

	
		printf("%d ",arr[i]);
	
}


