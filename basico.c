#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX 20
int main() {
    char letra, nome[MAX];
    int n1, n2;
    float flutuante;

    // [PARA CARACTERES ESPECIAIS]
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    
    // [PARA LER STRINGS]
    printf("Digite seu nome: ");
    fgets(nome, MAX, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Ola, %s!\n", nome);

    // [PARA OS DEMAIS INPUTS]
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("Os numeros digitados sao [n1: %d] e [n2: %d]", n1, n2);
    return 0;
}