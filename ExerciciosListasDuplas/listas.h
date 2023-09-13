struct lista2
{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};
typedef struct lista2 Lista2;

Lista2* lst_cria (void);

Lista2* ultimo (Lista2* l);

void lst_imprime (Lista2* l);

Lista2* lst_insere (Lista2* l, int i);

Lista2* lst_retira_ant (Lista2* l, int v);

void lst_libera (Lista2* l);