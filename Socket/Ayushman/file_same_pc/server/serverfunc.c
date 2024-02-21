#include "server.h"
#define SIZE 1024

void write_file(int sockfd, struct sockaddr_in addr){
  FILE *fp;
  char *filename = "server.txt";
  int n;
  char buffer[SIZE];
  socklen_t addr_size;

  // Creating a file.
  fp = fopen(filename, "w");

  // Receiving the data and writing it into the file.
  while(1){

    addr_size = sizeof(addr);
    n = recvfrom(sockfd, buffer, SIZE, 0, (struct sockaddr*)&addr, &addr_size);

    if (strcmp(buffer, "END") == 0){
      break;
      return;
    }
     printf("[RECEVING] Data: %s", buffer);
    fprintf(fp, "%s", buffer);
    bzero(buffer, SIZE);

  }

  fclose(fp);
  return;
}

