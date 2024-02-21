#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

void send_file_data(FILE* fp, int sockfd, struct sockaddr_in addr);
