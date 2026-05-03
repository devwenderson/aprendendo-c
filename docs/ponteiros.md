# Ponteiros
Ponteiros são variáveis que armazenam endereço de memória de outras variáveis.

## Ponteiro simples
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

## Ponteiro de ponteiro
Ponteiro que aponta para outro ponteiro

```c
int num;
int* ptrNum;
int** pptrNum;

num = 92;
ptrNum = &num;
pptrNum = &ptrNum;
```