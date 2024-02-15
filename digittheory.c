
#include<stdio.h>
void digit(int num);
void main()
{
	
	int i,num,n;
	
	printf("enter size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter digits\n");
	for(i=0;i<n;i++)
	{

	scanf("%1d",&arr[i]);
	}
	num=arr[i];
	digit(num);
}
void digit(int num)
{

	int one,two,three,foure,five,six,seven,eight,nine,zero;
	
	switch(num)
	{
		case 0:printf("zero\n");break;
		case 1:printf("one\n");break;
		case 2:printf("two\n");break;
		case 3:printf("three\n");break;
		case 4:printf("foure\n");break;
		case 5:printf("five\n");break;
		case 6:printf("six\n");break;
		case 7:printf("seven\n");break;
		case 8:printf("eight\n");break;
		case 9:printf("nine\n");break;
defalut:printf("invalid digit\n");
		       break;
	}
}

