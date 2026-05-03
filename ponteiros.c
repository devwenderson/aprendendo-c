#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int* ptrNum; // PONTEIRO
    int** pptrNum; // PONTEIRO DE PONTEIRO
    int*** ppptrNum; // PONTEIRO DE PONTEIRO DE PONTEIRO

    num = 92;
    ptrNum = &num;
    pptrNum = &ptrNum;
    ppptrNum = &pptrNum;

    printf("Num: %d\n", num);
    printf("Valor apontado por *ptrNum: %d\n", *ptrNum);
    printf("Valor apontado do ponteiro apontado por **pptrNum: %d\n", **pptrNum);
    printf("Valor apontado do ponteiro apontado pelo ponteiro por ***ppptrNum: %d\n", ***ppptrNum);
    
    printf("\n");
    printf("ptrNum: %x\n", ptrNum);
    printf("pptrNum: %x\n", pptrNum);
    printf("ppptrNum: %x\n", ppptrNum);
    
    printf("\n");
    printf("Valor apontado por **pptrNum: %x\n", *pptrNum);
    printf("Valor apontado por ***ppptrNum: %x\n", *ppptrNum);

    return 0;
}