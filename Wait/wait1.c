#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t cpid = fork();
	if (cpid == 0)
	{
		printf("Hello I m child.\n");
		sleep(1);
		printf("I m Child again, and my PID is %ld\n",(long) getpid());
		sleep(1);
		printf("I m child again, and I am terminating...\n");
		sleep(1);
		exit(7);
	}
	else
	{
		int status;
		pid_t rv = wait (&status);
		printf("Hello I m Parent.\n");
		printf("Return value of wait is %ld, and status is %d\n",(long)rv,status);
		exit(54);
	}
}

