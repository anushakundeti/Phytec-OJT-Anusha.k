#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t pid;
	pid = fork();

	if(pid < 0)
	{
		printf("fork failed\n");
	}

	else if(pid == 0)
	{
		printf("Child here\n");
		printf("Who is here\n");
	}

	else
	{
		printf("Parent here\n");
		printf("Who is here\n");
	}

	return 0;
}
