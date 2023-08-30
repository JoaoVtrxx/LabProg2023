#include "listas.h"
#include <stdlib.h>
#include <stdio.h>

Lista* lst_cria (void)
{
    return NULL;
}

Lista* lst_insere (Lista* l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;

    return novo;
}

int comprimento (Lista* l)
{   
    Lista* p;
    int tamanho = 0;
    for (p = l; p != NULL; p = p->prox){
        tamanho++;
    }

    free(p);
    return tamanho;
}

int maiores (Lista* l, int n){

    Lista* p;
    int quantidade = 0;

    for (p = l; p != NULL; p = p->prox){
        if(p->info > n){
            quantidade++;
        }
    }

    free(p);
    return quantidade;
}

Lista* ultimo (Lista* l){
    Lista* p;
    Lista* ant;

    for (p = l; p != NULL; p = p->prox){
        ant = p;
    }

    free(p);
    return ant;
}

void lst_imprime (Lista* l)
{
    Lista* p;
    for (p = l; p != NULL; p = p->prox){
        printf("info = %d\n", p->info);
    }

    free(p);
}

Lista* concatena (Lista* l1, Lista* l2){

    Lista* p;
    Lista* ant;

    p = l1;

    while (p != NULL) {
        ant = p;
        p = p->prox;
    }

    ant->prox = l2;

    free(p);
    free(ant);
    return l1;
}
