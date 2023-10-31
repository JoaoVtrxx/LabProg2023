#include <stdlib.h>
#include <stdio.h>
#include "filas.h"


Fila* fila_cria (void)
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void fila_insere (Fila* f, int v)
{
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v; 
    n->prox = NULL; 
    if (f->fim != NULL){
        f->fim->prox = n;
    } else{
        f->ini = n;
    }
    f->fim = n; 
    printf ("O valor %d foi inserido na lista.\n", v);
}

int fila_retira (Fila* f)
{
    Lista* t;
    float v;
    if (fila_vazia(f))
    {
        printf("\nFila vazia. Nao ha como remover elementos\n");
        system("pause");
        exit(1);
    }
    printf ("\nVai remover o inicio da fila, q neste momento eh o elemento %d", f->ini->info);
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if (f->ini == NULL){
        f->fim = NULL;
    }    
    free(t);
    return v;
}

int fila_vazia(Fila* f)
{
    return (f->ini==NULL);
}

int frente(Fila *f)
{   
    return f->ini->info;
}

void fila_libera (Fila* f)
{
    Lista* q = f->ini;
    while (q!=NULL)
    {
        printf ("\nLiberando o no %d\n", q->info);
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    printf ("\nLiberando a fila\n");
    free(f);
}

void fila_imprime(Fila* f)
{
    Lista* q;

    if(f->ini == NULL){
        printf("Fila vazia\n");
        exit(1);
    }

    for(q = f->ini; q != NULL; q = q->prox){

        printf("info: %d\n", q->info);

    }

}

Fila* ordenar(Fila* fila1, Fila* fila2)
{   
    printf("\n\n");
    Fila* p = fila1;
    Fila* q = fila2;
    Fila* res = fila_cria();
    int frente1 = 0;
    int frente2 = 0;

    if(fila1->ini == NULL){
        return fila2;
    }else if(fila2->ini == NULL){
        return fila1;
    }

    if(fila1->fim->info <= fila2->ini->info){
        fila1->fim->prox = fila2->ini;
        return fila1;
    }

    if(fila2->fim->info <= fila1->ini->info){
        fila2->fim->prox = fila1->ini;
        return fila2;
    }

    while(p->ini != NULL && q->ini != NULL){
        frente1 = frente(p);
        frente2 = frente(q);

        if(frente1 <= frente2)
        {
            fila_insere(res, frente1);
            p->ini = p->ini->prox;
        }else if(frente2 < frente1)
        {
            fila_insere(res, frente2);
            q->ini = q->ini->prox;
        }
    }

    if(p->ini == NULL){
        res->fim->prox = q->ini;
        res->fim = q->fim;
        return res;
    }else if(q->ini == NULL)
    {
        res->fim->prox = p->ini;
        res->fim = p->fim;
        return res;
    }

}