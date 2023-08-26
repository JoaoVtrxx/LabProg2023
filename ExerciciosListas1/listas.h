struct lista{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void);

Lista* lst_insere (Lista* l, int i);

int comprimento (Lista* l);

int maiores (Lista* l, int n);

Lista* ultimo (Lista* l);

void lst_imprime (Lista* l);

Lista* concatena (Lista* l1, Lista* l2);



