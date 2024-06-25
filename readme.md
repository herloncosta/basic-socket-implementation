# Implementação básica de sockets em C

Este projeto demonstra a implementação básica de sockets em C para comunicação TCP/IP entre um servidor e um cliente. O servidor escuta por conexões em uma porta especificada, aceita conexões de clientes, recebe mensagens e envia respostas. O cliente se conecta ao servidor, envia uma mensagem e aguarda uma resposta.

## Estrutura do Projeto

- `server.c`: Código fonte do servidor.
- `client.c`: Código fonte do cliente.

## Requisitos

- GCC (GNU Compiler Collection) ou outro compilador C compatível.
- Sistema operacional Unix-like (Linux, macOS) ou Windows com suporte a sockets.

## Compilação

Para compilar o código fonte, siga as instruções abaixo:

### Compilar o Servidor

```sh
gcc -o server server.c
```

### Compilar o Cliente

```sh
gcc -o client client.c
```

## Execução

### Executar o Servidor

Para iniciar o servidor, execute o seguinte comando:

```sh
./servidor
```

O servidor ficará escutando por conexões na porta 8080.

### Executar o Cliente

Em outra janela de terminal, execute o cliente:

```sh
./cliente
```

O cliente se conectará ao servidor na porta 8080, enviará uma mensagem e exibirá a resposta do servidor.

## Funcionamento

1. **Servidor:**

   - Cria um socket.
   - Liga o socket ao endereço e porta especificados.
   - Escuta por conexões de clientes.
   - Aceita uma conexão de cliente.
   - Lê a mensagem enviada pelo cliente.
   - Envia uma resposta ao cliente.
   - Fecha a conexão.

2. **Cliente:**
   - Cria um socket.
   - Conecta-se ao servidor no endereço e porta especificados.
   - Envia uma mensagem ao servidor.
   - Lê a resposta do servidor.
   - Fecha a conexão.

## Exemplo de Saída

### Saída do Servidor

```sh
Esperando por conexões...
Mensagem recebida: Olá do cliente
Resposta enviada.
```

### Saída do Cliente

```sh
Mensagem enviada
Resposta recebida: Mensagem recebida!
```

## Recursos Adicionais

Para mais informações sobre sockets em C, consulte os seguintes recursos:

- [Beej's Guide to Network Programming](http://beej.us/guide/bgnet/)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) por Brian W. Kernighan e Dennis M. Ritchie.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests com melhorias, correções de bugs, ou novas funcionalidades.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
