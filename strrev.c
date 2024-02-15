#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,l;
	char temp;
	printf("enter string\n");
	scanf("%[^\n]s",str);
	l=strlen(str);
//	printf("%d\n",l);
	for(i=0;i<l/2;i++)
	{

		temp=str[i];
		str[i]=str[l];
		str[l]=temp;
	}
	
	printf("%s",str[l]);
}
