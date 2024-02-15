#include<stdio.h>
void main()
{
	int num,temp,rem,sum=0;
	printf("enter 3 digit num\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum+=rem*rem*rem;
		temp/=10;
	}
	if(sum==num)
		printf("armstrong\n");
	else
		printf("not armstrong\n");
}
