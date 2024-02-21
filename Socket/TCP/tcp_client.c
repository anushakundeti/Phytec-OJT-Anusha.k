#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 4444

int main(){
	
	//CREATE A SOCKET
	int clientSocket;
	clientSocket = socket(PF_INET, SOCK_STREAM, 0);
        printf("[+]Client Socket Created Sucessfully.\n");
	
	//Specify an address for the socket.
	struct sockaddr_in serverAddr;
	memset(&serverAddr, '\0', sizeof(serverAddr));
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(PORT);
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	int connection_status = connect(clientSocket, (struct sockaddr*) &serverAddr, sizeof(serverAddr));
	//Check for error with the connection
	if(connection_status == -1)
	{
		printf("There was an error making a connection to the remote socket \n\n");
	}
	printf("[+]Connected to Server.\n");
	
	//receive data from server
	char buffer[256];
	recv(clientSocket, &buffer, sizeof(buffer),0);

	//print out the server's response
	printf("[+]Data Recv: %s\n", buffer);

	//close the socket
	close(socket);

	return 0;
}
