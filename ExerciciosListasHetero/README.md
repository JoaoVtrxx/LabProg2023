# Lista de tipos estruturados e lista de tipos heterogêneos

### Cenário 1: 
1. Considere uma lista de alunos. Faça uma função que insira elementos nesta lista, dada a seguinte definição de struct:
``` C
    struct lista
    {
     int matricula;
     char nome[50];
     struct lista* prox;
    };
    typedef struct lista Lista;
```
2. Faça uma função que imprima os elementos desta lista.

### Cenário 2:
1. Considere uma lista de alunos. Faça uma função que insira elementos nesta lista, dadas as seguintes definições de structs:
``` C
    struct aluno
    {
     int matricula;
     char nome[50];
    };
    typedef struct aluno Aluno;
    
    struct lista
    {
     Aluno info;
     struct lista* prox;
    };
    typedef struct lista Lista;
```
2. Faça uma função que imprima os elementos desta lista.

### Cenário 3
1. Considere uma lista de alunos. Faça uma função que insira elementos nesta lista, dadas as seguintes definições de structs:
``` C
    struct aluno
    {
     int matricula;
     char nome[50];
    };
    typedef struct aluno Aluno;
    
    struct lista
    {
     Aluno* info;
     struct lista* prox;
    };
    typedef struct lista Lista;
```
2. Faça uma função que imprima os elementos desta lista.

### Cenário 4
1. Considere uma lista de alunos e uma lista de professores. Faça uma função que insira elementos nesta lista, dadas as seguintes definições de structs:
``` C
    struct professor
    {
     int codigo;
     char nome[50];
     float salario;
    };
    typedef struct professor Professor;

    struct aluno
    {
     int matricula;
     char nome[50];
    };
    typedef struct aluno Aluno;
    
    struct listaHet
    {
     int tipo;
     void* info;
     struct listaHet* prox;
    };
    typedef struct listaHet ListaHet;
```

2. Faça uma função que imprima os elementos desta lista.

