struct lista
{
    int matricula;
    char nome[50];
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria(void);

Lista* lst_insere(Lista *l, int matricula, char* nome);

void lst_imprime (Lista* l);

void lst_libera (Lista* l);