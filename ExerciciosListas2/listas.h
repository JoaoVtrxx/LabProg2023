struct lista{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lst_cria (void);

Lista* lst_insere_inicio (Lista* l, int i);

Lista* lst_insere_fim (Lista* l, int i);

void lst_imprime (Lista* l);

Lista* lst_altera (Lista* l);

Lista* lst_calculaMedia (Lista* l);

Lista* lst_retira_ant (Lista* l, int v);



