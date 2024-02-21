#include "client.h"
#define SIZE 1024


int main(void)
{

  // Defining the IP and Port
  char *ip = "127.0.0.1";
  const int port = 8080;

  // Defining variables
  int server_sockfd;
  struct sockaddr_in server_addr;
  char *filename = "client.txt";
  FILE *fp = fopen(filename, "r");

  // Creating a UDP socket
  server_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
  if (server_sockfd < 0)
  {
    perror("[ERROR] socket error");
    exit(1);
  }
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = port;
  server_addr.sin_addr.s_addr = inet_addr(ip);

  // Reading the text file
  if (fp == NULL)
  {
    perror("[ERROR] reading the file");
    exit(1);
  }

  // Sending the file data to the server
  send_file_data(fp, server_sockfd, server_addr);

  printf("[SUCCESS] Data transfer complete.\n");
  printf("[CLOSING] Disconnecting from the server.\n");

  close(server_sockfd);

  return 0;
}
