#include <stdio.h>
#include "header/header-exemplo.h"

int main() {
    char s[256+1];
    mensagem(s);
    printf("%s", s);
    return 0;
}