#define N 3

struct pilha {
    int n;
    float vet[N];
};
typedef struct pilha Pilha;

Pilha* pilha_cria (void);

void pilha_push (Pilha* p, float v);

int pilha_vazia (Pilha* p);

float pilha_pop (Pilha* p);

void pilha_libera (Pilha* p);

void pilha_imprime(Pilha* p);