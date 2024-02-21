/* 
 *  Executing a shell command using system()
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	system(argv[1]);
	printf("\nDone...Bye\n");
	exit(0);
}
