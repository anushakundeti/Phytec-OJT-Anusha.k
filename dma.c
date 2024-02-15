#include<stdio.h>
#include<stdlib.h>

void mall(int arr[])
{
	int i;
	int *ptr;
	int n,sum=0;
	printf("enter no.of  elements\n");
	scanf("%d",&n);

        ptr=(int *)malloc(n*sizeof(int));
	printf("enter elments\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("sum of array is:%d\n",sum);
}
void call(int arr[])
{
	int i;
	int *ptr;
	int *anu;
	int n,sum=0;
	printf("enter size\n");
	scanf("%d",&n);
	
	ptr=(int *)calloc(n,sizeof(int));
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("sum of array %d\n",sum);
	anu=(int *)realloc(ptr,3);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{

	printf("%d ",arr[i]);

	}

}
void main()
{
	int n;
	int arr[n];
	mall(arr);
	call(arr);
}

