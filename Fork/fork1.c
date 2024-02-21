#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int cpid = fork();
	if(cpid == 0)
		printf("Hello I am Child\n");
	else
		printf("Hello I am parent\n");
	return 0;
}

