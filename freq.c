#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j,c=0,n,k;
	int arr1[n];
	int arr2[10];
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr1[i]==arr2[j])
			{
				c++;
			}
			arr2[k]=c;
			k++;
		
			c=0;
		}
	}	
	for(i=0;i<n;i++)
	{
		printf("%d",arr2[k]);
	}
}

