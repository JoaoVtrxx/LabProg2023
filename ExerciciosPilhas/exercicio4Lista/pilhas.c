#include <stdlib.h>
#include <stdio.h>
#include "pilhas.h"

Pilha* pilha_cria (void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void pilha_push (Pilha* p, float v)
{
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}

int pilha_vazia (Pilha* p)
{
    return (p->prim==NULL);
}

float pilha_pop (Pilha* p)
{
    Lista* t;
    float v;

    if (pilha_vazia(p))
    {
        printf("*** Pilha vazia.\n");
        system("pause");
        exit(1);
    }

    t = p->prim;
    v = t->info;
    p->prim = t->prox;

    free(t);
    return v;
}

void pilha_libera (Pilha* p)
{
    Lista* q = p->prim;
    while (q!=NULL) {
        Lista* t = q->prox;
        printf ("\nLiberando %.2f\n", q->info);
        free(q);
        q = t;
    }
    free(p);
}

void pilha_imprime(Pilha* p){
    if(p->prim == NULL){
        printf("Lista vazia\n");
        exit(1);
    }

    Lista* l = p->prim;

    printf("Imprimindo pilha: \n");
    for(l = p->prim; l != NULL; l = l->prox){
        printf("info: %.2f\n", l->info);
    }
}

void pilha_esvazia(Pilha* p){
    if(p->prim == NULL){
        printf("Lista vazia\n");
        exit(1);
    }

    Lista* q = p->prim;

     while (q!=NULL) {
        Lista* t = q->prox;
        free(q);
        q = t;
    }

    p->prim = NULL;
}