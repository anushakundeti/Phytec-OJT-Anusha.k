#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,rem,sum=0,temp,num;
	printf("enter num\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(num==sum)
		printf("palindrome\n");
	else
		printf("not palindrome\n");
}

