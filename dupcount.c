#include<stdio.h>
void main()
{
	int i,j,c=1;
	int arr[10];
	printf("enter elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]==arr[i+1])
			c++;
		break;
	}
	printf("%d ",arr[i+1]);
}
