#include<stdio.h>
#include<stdlib.h>
void sort(int *arr,int n)
{
	int i, j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void display(int *arr,int n)
{
	int i;
//	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("sorted elements:%d\n",arr[i]);
	}
}
void main()
{
	int i,n=5;
	int arr[n];
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,5);
	display(arr,5);

}



