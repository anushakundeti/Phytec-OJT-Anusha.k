#include<stdio.h>
void main()
{
	int num,sqa;
	printf("enter num\n");
	scanf("%d",&num);
	sqa=num*num;
	while(sqa<1000)
	{
		printf("%d\n",sqa);
		num++;
		sqa=num*num;
	}
	printf("num is exceeded the value od sqa\n");
}



