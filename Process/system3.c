#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Executing a script using system for main.\n\n");
	system("/bin/bash/ script.sh");
	printf("\n\nDone... Bye from main\n");
	exit(0);
}
