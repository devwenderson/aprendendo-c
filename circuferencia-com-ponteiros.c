#include <stdio.h>
#include <locale.h>
#include <string.h>

#define PI 3.1459

double calcular_comprimento(double *raio) {
    return 2*(*raio)*PI;
}

double calcular_area(double *raio) {
    return PI*(*raio)*(*raio); 
}

void exibir_mensagem(int *opcao, double *resultado){
    switch (*opcao) {
        case 1:
            printf("Resultado: %.5fcm", *resultado);
            break;
        case 2:
            printf("Resultado: %.5fcm**2", *resultado);
            break;
    }
}

int main() {
    int opcao;
    double raio, resultado;

    printf("[Funcionalidades]\n");
    printf("1 - Calcular comprimento\n2 - Calcular area\n");
    printf("Opcao desejada: ");
    scanf("%d", &opcao);
    printf("Raio da circunferencia (cm): ");
    scanf("%lf", &raio);

    switch (opcao) {
        case 1:
            resultado = calcular_comprimento(&raio);
            exibir_mensagem(&opcao, &resultado);
            break;
        case 2:
            resultado = calcular_area(&raio);
            exibir_mensagem(&opcao, &resultado);
            break;
        default:
            printf("[Opcao invalida]");
            break;
    }
    printf("\n");   
    return 0;
}