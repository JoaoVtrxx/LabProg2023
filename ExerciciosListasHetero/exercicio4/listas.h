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

ListaHet* lst_cria(void);

ListaHet* lst_insere(ListaHet *l, void* info, int tipo);

void lst_imprime (ListaHet* l);

