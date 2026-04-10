#include <stdio.h> 
#include <string.h>

typedef enum {
    VIVO = 1,
    MORTO = 2
} Status;

typedef struct {
    char nome[20];
    int idade;
} Dados;

typedef struct {
    char cidade[20];
} Endereco;

typedef struct {
  Status status;
  Dados dados;
  Endereco endereco;
} Pessoa;

int main() {
    // EXEMPLO SIMPLES
    int valor, *ptr;
    valor = 198;
    ptr = &valor; 

    printf("[Variavel: valor]: %d\n", valor);
    printf("[Variavel: *ptr][armazena um endereco]: %x\n", ptr);
    printf("Valor dentro do endereco apontado por *ptr]: %d\n", (*ptr));

    // USANDO STRUCT
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    
    pessoa->status = VIVO; // Usa (->) para acessar os dados apontados pelo ponteiro
    pessoa->dados.idade = 20; // "idade" é atributo de dados, que é um struct
    strcpy(pessoa->dados.nome, "Wenderson");
    strcpy(pessoa->endereco.cidade, "Bom Jesus");

    printf("[PESSOA] Dados\n");
    printf("{Nome: %s\nIdade: %d\nCidade: %s\nStatus: %d}", 
        pessoa->dados.nome, 
        pessoa->dados.idade, 
        pessoa->endereco.cidade,
        pessoa->status);
    free(pessoa);
    return 0;
}