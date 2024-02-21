#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int gvar = 155;
int main()
{
	int lvar = 10;
	int cpid = fork();

	if(cpid == 0)
		printf("I am a chile process with PID = %ld,gvar = %d,lvar = %d\n",(long)getpid(),gvar,lvar);
	else
		printf("I am a parent process with PID=%ld,gvar=%d,lvar=%d\n",(long)getpid(),gvar,lvar);
	
	return 0;
}
