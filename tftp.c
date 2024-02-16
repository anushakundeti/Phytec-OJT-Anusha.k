#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define TFTP_SERVER_PORT 69
#define MAX_BUFFER_SIZE 516  // Maximum TFTP packet size

void error(char *msg) {
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <server_ip> <filename> <mode>\n", argv[0]);
        exit(1);
    }

    char *server_ip = argv[1];
    char *filename = argv[2];
    char *mode = argv[3];

    // Create UDP socket
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        error("Error opening socket");
    }

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(TFTP_SERVER_PORT);
    if (inet_pton(AF_INET, server_ip, &server_addr.sin_addr) <= 0) {
        error("Error converting IP address");
    }

    // Prepare the request packet
    char request[MAX_BUFFER_SIZE];
    sprintf(request, "%c%c%s%c%s%c", 0, 1, filename, 0, mode, 0);

    // Send the request to the server
    if (sendto(sockfd, request, strlen(request), 0, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        error("Error sending request");
    }

    // Receive the response from the server
    char response[MAX_BUFFER_SIZE];
    socklen_t server_len = sizeof(server_addr);
    int bytes_received = recvfrom(sockfd, response, sizeof(response), 0, (struct sockaddr *)&server_addr, &server_len);
    if (bytes_received < 0) {
        error("Error receiving response");
    }

    // Display the received data (assuming it's an error message)
    response[bytes_received] = '\0';
    printf("Received response from server:\n%s\n", response);

    // Close the socket
    close(sockfd);

    return 0;
}

