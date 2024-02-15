#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
void main()
{
	int i,j=0,len,k=0;
	char arr[100];
	char **ptr;
	ptr=(char **)malloc(10*sizeof(char *));
	printf("ANUSHA BASH:~$ ");
	scanf("%[^\n]s",arr);
	len=strlen(arr);
	printf("len:%d\n",len);
	for(i=0;i<=len;i++)
	{
		if(arr[i]==' ' || i==len)
		{
			arr[i]='\0';
			ptr[j]=arr+k;
			j++;
			k=i+1;
		}
	}
	ptr[j]='\0';
	printf("ptr[0]:%s\n",ptr[0]);
	printf("ptr[1]:%s\n",ptr[1]);
	execvp(ptr[0],ptr);
}

