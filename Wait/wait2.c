#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

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
		int low_8 = status & 0xff;
		int high_8 = status >> 8;
		if(low_8 == 0)
			printf("Return value of wait is %ld, and status is %ld\n",(long)rv,high_8);
		exit(54);
	}
}

