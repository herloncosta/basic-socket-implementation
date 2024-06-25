#include "stdio.h"
#include "stdlib.h"
#include "arpa/inet.h"
#include "string.h"
#include "unistd.h"

#define PORT 8080

int main()
{
    int sock = 0;
    struct sockaddr_in serv_addr;
    char *hello = "Client message...";
    char buffer[1024] = {0};

    //  criar um socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("Failed to create socket.\n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // converter o endereço IP do servidor
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0)
    {
        printf("Invalid or not supported address.\n");
        return -1;
    }

    // conectar ao servidor
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("Connection failed.\n");
        return -1;
    }

    // enviar uma mensagem ao servidor
    send(sock, hello, strlen(hello), 0);
    printf("Hello message sent.\n");

    // ler resposta do servidor
    read(sock, buffer, 1024);
    printf("Received server message: %s\n", buffer);

    // fechar o socket e encerrar conexão
    close(sock);

    return 0;
}