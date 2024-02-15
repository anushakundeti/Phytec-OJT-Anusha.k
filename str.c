#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int l=0,k,j,i;
	printf("enter str\n");
	scanf("%[^\n]s",str);
	for(k=0;str[k]!=0;k++)
	{
		l++;
	}
//	printf("%d\n",l);
//
int c=0;
	for(i=0;i<=l+1;i++)
	{
		
		if((str[i]==' ')||(i<=l+1))
		{
			k=l-1;
			for(j=i-1;j>=c;j--)
			{
				
				printf("%c",str[j]);
				
			}
			c=i+1;

		
		
		
	}
}
}
