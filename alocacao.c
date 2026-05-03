#include <stdio.h>
#include <stdlib.h>

/* ALOCAÇÃO DE MATRIZES */

int** alocarMatriz(int LINHA, int COLUNA) {
    /*
        ESSA FUNÇÃO RETORNA UM PONTEIRO DE PONTEIRO. 
        NÃO RETORNA A MATRIZ COM VALORES. 
        É NECESSÁRIO COLAR OS VALORES NA MATRIZ DEPOIS.
    */

    int** matriz = malloc(LINHA * sizeof(int*)); // -> CRIA AS LINHAS DA MATRIZ (AS LINHAS SÂO PONTEIROS)

    for(int i=0; i<LINHA; ++i) {
        matriz[i] = malloc(COLUNA * sizeof(int)); // -> DENTRO DE CADA LINHA (QUE SÃO PONTEIROS) SERÃO VINCULADOS ARRAYS
    }
    
    return matriz; // -> RETORNA O PONTEIRO QUE APONTA PARA OUTROS PONTEIROS
}

void desalocarMatriz(int** matriz, int LINHA) {
    for (int i=0; i<LINHA; ++i) {
        free(matriz[i]); // DESALOCAR CADA COLUNA (ISSO APAGA AS COLUNAS DA MATRIZ)
    }
    free(matriz); // DESALOCAR LINHAS (ISSO APAGA AS LINHAS DA MATRIZ)
}

void adicionarValoresNaMatriz(int** matriz, int LINHA, int COLUNA) {
    int count = 0;
    for(int i=0; i<LINHA; ++i) {
        for(int j=0; j<COLUNA; ++j) {
            count++;
            matriz[i][j] = count;
        }
    }
}

void imprimirMatriz(int** matriz, int LINHA, int COLUNA) {
    for(int i=0; i<LINHA; ++i) {
        for(int j=0; j<COLUNA; ++j) {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int LINHA = 3;
    int COLUNA = 4;
    
    int** matriz = alocarMatriz(LINHA, COLUNA);

    adicionarValoresNaMatriz(matriz, LINHA, COLUNA);

    imprimirMatriz(matriz, LINHA, COLUNA);

    desalocarMatriz(matriz, LINHA);

    return 0;
}