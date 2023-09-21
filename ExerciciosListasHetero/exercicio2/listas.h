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

Lista* lst_cria(void);

Lista* lst_insere(Lista *l, int matricula, char* nome);

void lst_imprime (Lista* l);

void lst_libera (Lista* l);