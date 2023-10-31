
struct lista {
    float info;
    struct lista* prox;
};
typedef struct lista Lista;

struct fila {
    Lista* ini;
    Lista* fim;
};
typedef struct fila Fila;

Fila* fila_cria (void);

void fila_insere (Fila* f, float v);

int fila_vazia (Fila* f);

float fila_retira (Fila* f);

void fila_libera (Fila* f);

void fila_imprime(Fila* f);