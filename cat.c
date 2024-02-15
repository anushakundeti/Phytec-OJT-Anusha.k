#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
void main(int argc,char *argv[])
{
	int fd,ret=0;
	char buf[200];
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		printf("failed to open the file\n");
		exit(1);
	}
	while(ret=read(fd,buf,200))
	{
		if(ret<0)
		{
			printf("failed to read\n");
			exit(1);
		}
		buf[ret]='\0';
		printf("%s",buf);
	}
}
