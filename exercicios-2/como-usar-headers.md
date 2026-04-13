# Arquivos headers (.h/.hpp)
Nesta seção, iremos tratar dos arquivos headers (de cabeçalho) presentes nos códigos em C/C++

Os aquivos de cabeçalho são usados para definir a estrutura de funções, structs e classes (no caso do c++). As implementações das estruturas definidas são feitas em um arquivo .c/.cpp, podendo ser separado do main.cpp ou dentro dele mesmo.

Ao implementar as definições do arquivo de cabeçalho dentro de arquivos .c/.cpp separados, é necessário fazer o build de todos eles de uma vez.

```shell
g++ -o main main.cpp arquivo1.cpp arquivo2.cpp arquivo3.cpp
```

> [!NOTE]
> O arquivo `build.ps1` possui um exemplo de execução desse comando
