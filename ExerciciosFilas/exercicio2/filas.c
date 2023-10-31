#include <stdlib.h>
#include <stdio.h>
#include "filas.h"


Fila* fila_cria (void)
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

void fila_insere (Fila* f, float v)
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
    printf ("O valor %.2f foi inserido na lista.\n", v);
}

int fila_vazia(Fila* f)
{
    return (f->ini==NULL);
}

float fila_retira (Fila* f)
{
    Lista* t;
    float v;
    if (fila_vazia(f))
    {
        printf("\nFila vazia. Nao ha como remover elementos\n");
        system("pause");
        exit(1);
    } 
    printf ("\nVai remover o inicio da fila, q neste momento eh o elemento %.2f", f->ini->info);
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if (f->ini == NULL){
        f->fim = NULL;
    }    
    free(t);
    return v;
}

void fila_libera (Fila* f)
{
    Lista* q = f->ini;
    while (q!=NULL)
    {
        printf ("\nLiberando o no %.2f\n", q->info);
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    printf ("\nLiberando a fila\n");
    free(f);
}

void fila_imprime(Fila* f){
    Lista* q;

    if(f->ini == NULL){
        printf("Fila vazia\n");
        exit(1);
    }

    for(q = f->ini; q != NULL; q = q->prox){

        printf("info: %f\n", q->info);

    }
}

void combina_filas (Fila* f_res, Fila* f1, Fila* f2){
    Lista* q;

    if(f1->ini == NULL){
        f_res->ini = f2->ini ;
        f_res->fim = f2->fim;
        return;
    }else if(f2->ini == NULL){
        f_res->ini = f1->ini ;
        f_res->fim = f1->fim;
        return;
    }

    f_res->ini = f1->ini;

    q = f1->ini;
    f1->ini = f1->ini->prox;

    while(q != NULL){
        if(f2->ini != NULL){
            q->prox = f2->ini;
            f2->ini = f2->ini->prox;
        }
        
        if(f1->ini != NULL){
            q = q->prox;
            q->prox = f1->ini;
            f1->ini = f1->ini->prox;

        }        

        f_res->fim = q; 
        q = q->prox;   
    }

    f1->fim = NULL;
    f2->fim = NULL;

}