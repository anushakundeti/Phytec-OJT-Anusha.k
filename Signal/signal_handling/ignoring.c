#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
int main()
{
	signal(SIGINT,SIG_IGN);
	signal(SIGFPE,SIG_IGN);
	while(1)
	{
		printf("I am in an infinite loop!\n");
		printf("You can't kill me by SIGINT <2> or SIGFPE <8>\n");
		sleep(2);
	}
	return 0;
}


