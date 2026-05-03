## Struct

Structs são uma forma de agrupar dados diferentes em um espaço de memória. Seguem a seguinte estrutura:

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
} instrumentoMusicalDeCordas;
```