#include<stdio.h>
#include<string.h>
void main()
{
	int i,c=1;
	char str[100];
	printf("enter stings\n");
	scanf("%[^\n]s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			c++;
	}
	printf("total words is :%d\n",c);
}
