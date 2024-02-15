#include<stdio.h>
#include<string.h>
void main()
{
	int i,c;
	char anu[100];
	printf("enter string\n");
	scanf("%[^\n]s",anu);
	int l=strlen(anu);
	for(i=0;anu[i]!='\0';i++)
	{
	 c++ ;
	}

		if(anu[i]!=l-1)
			printf("palindrome");
		else
			printf("not ");
	
}
