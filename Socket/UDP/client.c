#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("Must enter IP and Port of echo server\n");
		exit(1);
	}
        //STEP = I -> Create a socket
        int sockfd = socket(PF_INET, SOCK_DGRAM, 0);

        //STEP = II -> populate Socket's DS for remote IP and Port, and 
        //let the local IP and port be selected by the OS itself
        struct sockaddr_in dest_addr;
        dest_addr.sin_family = AF_INET;
        dest_addr.sin_port = htons(atoi(argv[2]));
        inet_aton(argv[1], &dest_addr.sin_addr);
        memset(&(dest_addr.sin_zero), '\0',sizeof dest_addr.sin_zero);

        //STEP = III -> Connected UDP Socket 
        connect(sockfd, (struct sockaddr*)& dest_addr, sizeof dest_addr);

        //STEP = IV -> Get a string from user and use write() to send that string
	//to echo server and then read a message from server and display on stdout
        char buff1[128],buff2[128];
       	while(1)
        {
                int n = read(0,buff1,sizeof buff1);
                buff1[n] = '\0';
                write(sockfd,buff1,strlen(buff1));
                n = read(sockfd, buff2, strlen(buff1)); //read want to be in loop for simplicity dint use loop
                                                        //error handling is not done do that for all functions
                buff2[n] = '\0';
               write(1, buff2, n);
        }
	  
       
	// STEP = V -> Close socket
        close(sockfd);
        exit(0);
}


