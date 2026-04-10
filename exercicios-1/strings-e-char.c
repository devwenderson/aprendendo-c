#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {
    char nome[MAX], sobrenome[MAX];

    printf("Primeiro nome: ");
    fgets(nome, MAX, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Para remover a quebra de linha
    
    printf("Sobrenome: ");
    fgets(sobrenome, MAX, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    printf("Ola, %s %s!", nome, sobrenome);


    return 0;
}