#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include <sys/wait.h>

void main()
{
	pid_t pid;
	int i,j=1,stat=0;
	char arr[100];
	char *ptr[10];
	printf("ANUSHA BASH:~$");
	scanf("%[^\n]s",arr);
	ptr[0]=arr;
	for(i=0;arr[i];i++)
	{
		if(arr[i]==' ')
		{
			arr[i]='\0';
			if(arr[i+1]!='\0')
			{
				ptr[j]=&arr[i+1];

				j++;
			}
		}
	}
	ptr[j]='\0';
	pid=fork();
	if(pid<0)
	{
		printf("failed to creat child\n");
		exit(1);
	}
	else if(pid>0)
	{
		printf("parent is running here\n");
		wait(&stat);
	}
	else

		execvp(ptr[0],ptr);

}
