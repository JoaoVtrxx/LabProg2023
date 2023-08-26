#include "listas.h"
#include <stdlib.h>
#include <stdio.h>

Lista* lst_cria (void)
{
    return NULL;
}

Lista* lst_insere_inicio (Lista* l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;

    return novo;
}

Lista* lst_insere_fim (Lista* l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;

    if(l == NULL){
        return novo;
    }

    Lista* p;
    Lista* ant;

    p = l;

    while (p != NULL) {
        ant = p;
        p = p->prox;
    }

    ant->prox = novo;

    return l;
}

void lst_imprime (Lista* l)
{
    Lista* p;
    for (p = l; p != NULL; p = p->prox){
        printf("info = %d\n", p->info);
    }
}

Lista* lst_altera (Lista* l){
    Lista* p;
    for (p = l; p != NULL; p = p->prox){
        p->info = p->info*-1;
    }

    return l;
}

Lista* lst_calculaMedia (Lista* l){
    Lista* p;

    float soma;
    int cont = 0;

    for (p = l; p != NULL; p = p->prox){
        soma = soma + p->info;
        cont++;
    }

    soma = soma/cont;

    printf("media dos valores = %f\n",  soma);

    return l;
}

Lista* lst_retira_ant (Lista* l, int v){

    Lista* ant;
    Lista* p;
    Lista* dep;

    p = l;
    dep = p->prox;

    if(dep->info == v){
        l = dep;
        p = NULL;
        return l;
    }

    if(p->info == v){
        printf("Termo antecessor ao digitado nao existe\n");
        return l;
    }

    while(dep != NULL && dep->info != v){
        ant = p;
        p = p->prox;
        dep = p->prox;
    }

    ant->prox = dep;
    p = NULL;

    return l;
}