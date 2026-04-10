#include <stdio.h>

typedef enum Status {
    PENDENTE = 1,
    CONLUIDO = 2,
    ATRASADO = 3
} Status;

typedef struct {
    char *titulo;
    Status status;
} Trabalho;

int main() {
    Trabalho tra;
    tra.titulo = "Trabalho 1";
    tra.status = ATRASADO;
    printf("Trabalho: %s - Status: %d", tra.titulo, tra.status);
    return 0;
}