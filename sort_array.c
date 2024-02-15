#include<stdio.h>
int read(int n,int arr[]);
int sort_arr(int n,int arr[]);
void main()
{
	int n;
	int arr[n];
	printf("enter elements\n");
	scanf("%d",&n);
	read(n,arr);
	sort_arr(n,arr);
}
int sort_arr(int n,int arr[])
{
	int i,j,temp;
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]>=arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
for(i=0;i<=n;i++)
{
	printf("%d\n",arr[i]);
}
}
int read(int n,int arr[])
{
	int i,j;
	printf("enter elements\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
}

