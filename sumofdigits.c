#include<stdio.h>
void main()
{
	int rem,temp,sum=0,num=123;
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		temp=temp/10;
		sum=sum+rem;
	}
	printf("sum=%d\n",sum);
}

