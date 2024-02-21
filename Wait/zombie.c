#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
        pid_t cpid = fork();
        if (cpid == 0)
        {
                printf("Terminating child with PID=%ld\n",(long)getpid());
                exit(0);
        }
        else
        {
                printf("Running parent,PID=%ld\n",(long)getpid());
                sleep(5);
	}
	return 0;
}
