#include "client.h"
#define SIZE 1024

void send_file_data(FILE* fp, int sockfd, struct sockaddr_in addr)
{
        int n;
        char buffer[SIZE];

        // Sending the data
        while (fgets(buffer, SIZE, fp) != NULL)
        {
                printf("[SENDING] Data: %s", buffer);

                n = sendto(sockfd, buffer, SIZE, 0, (struct sockaddr*)&addr, sizeof(addr));
                if (n == -1)
                {
                        perror("[ERROR] sending data to the server.");
                        exit(1);
                }
                bzero(buffer, SIZE);
        }
	// Sending the 'END'
        strcpy(buffer, "END");
        sendto(sockfd, buffer, SIZE, 0, (struct sockaddr*)&addr, sizeof(addr));

        fclose(fp);
}

