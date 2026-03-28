#include <stdio.h> 

int main() {
    int valor, *ptr;
    valor = 198;
    ptr = &valor; 

    printf("Variavel [valor]: %d\n", valor);
    printf("Variavel [armazena um endereco] [*ptr]: %x\n", ptr);
    printf("Valor dentro do endereco apontado por [*ptr]: %d\n", *ptr);

    return 0;
}