
struct lista {
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

struct fila {
    Lista* ini;
    Lista* fim;
};
typedef struct fila Fila;

Fila* fila_cria (void);

void fila_insere (Fila* f, int v);

int fila_retira (Fila* f);

int fila_vazia (Fila* f);

int frente(Fila *f);

void fila_libera (Fila* f);

void fila_imprime(Fila* f);

Fila* ordenar(Fila* fila1, Fila* fila2);