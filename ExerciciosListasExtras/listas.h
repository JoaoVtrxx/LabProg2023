struct lista{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void);

Lista* lst_insere_inicio (Lista* l, int i);

Lista* lst_insere_fim (Lista* l, int i);

void lst_imprime (Lista* l);

Lista* lst_retira (Lista* l, int v);

Lista* separa (Lista* l, int n);

Lista* merge (Lista* l1, Lista* l2);

Lista* inverte (Lista* l);

void lst_libera (Lista* l);

void igual (Lista* l1, Lista* l2);

Lista* copia (Lista* l);

Lista* lst_insere_circular (Lista* l, int i);