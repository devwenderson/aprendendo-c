# Básico 1

## Ponteiros
Ponteiros são variáveis que armazenam endereço de memória de outras variáveis.

```cpp
int num;
int* ponteiro;

num = 10;
poteiro = &num;

printf("Variavel [num]: %d\n", valor);
printf("Variavel [*ptr]: %x\n", ptr);
printf("Valor dentro do endereco apontado por [*ptr]: %d\n", *ptr);
```

- Usa-se `ponteiro = &variavel` para atribuir um endereço ao ponteiro;
- Usa-se `*ponteiro` -- com `*` antes da variável -- para acessar o valor armazenado no endereço apontado pelo ponteiro

## Struct

Structs são uma forma de agrupar dados relacionados em um espaço de memória. Seguem a seguinte estrutura:

```cpp
typedef struct {
    int variavel1;
    char variavel2;
    double variavel3
} nome_do_struct;
```

### Exemplos práticos de structs

```cpp
typedef struct {
    int dia, mes, ano;
} data;
```

```cpp
typedef struct {
    char nome[64];
    int numCordas;
} instrumentoDeCordas;
```

## Alocação dinâmica de memória
[Artigo sobre alocação](https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html)