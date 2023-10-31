#include "pilhas.h"
#include <stdlib.h>
#include <stdio.h>


Pilha* pilha_cria (void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void pilha_push (Pilha* p, float v)
{
    if (p->n == N)
    {
        printf("\n\n*** Capacidade da pilha estourou! Vc nao pode inserir mais do que %d elementos\n\n", N);
        system ("pause");
        exit(1);
    }

    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia (Pilha* p)
{
    return (p->n==0);
}

float pilha_pop (Pilha* p)
{
    float v;

    if (pilha_vazia(p))
    {
        printf("*** Pilha vazia!!\n");
        system("pause");
        exit(1);
    }
    /* retira elemento do topo */
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void pilha_libera (Pilha* p)
{
    free (p);
}

void pilha_imprime(Pilha* p){
    if(p->n == 0 ){
        printf("Pilha vazia \n");
        exit(1);
    }

    printf("Imprimindo pilha: \n");

    for(int i = p->n-1; i >=0 ; i--){
        printf("info: %.2f \n", p->vet[i]);
    }
}

int pilha_tamanho(Pilha* p){
    return p->n;
}

int pilha_topo(Pilha* p){
    if(p->n == 0){
        printf("Pilha vazia; \n");
        return 0;
    }

    return p->vet[p->n-1];
}