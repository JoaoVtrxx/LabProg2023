#include "listas.h"
#include <stdlib.h>
#include <stdio.h>

Lista2* lst_cria (void){
     return NULL;
}

Lista2* ultimo (Lista2* l){
    Lista2* p;
    Lista2* ant;

    for (p = l; p != NULL; p = p->prox){
        ant = p;
    }

    return ant;
}

void lst_imprime (Lista2* l)
{
    Lista2* p;
    for (p = l; p != NULL; p = p->prox){
        printf("info = %d\n", p->info);
    }
}

Lista2* lst_insere (Lista2* l, int i){

    Lista2* elementoFinal;
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = i;
    novo->prox = NULL;

    if(l == NULL){
        novo->ant = NULL;

        return novo;
    }

    elementoFinal = ultimo(l);
    elementoFinal->prox = novo;
    novo->ant = elementoFinal;

    return l;
}

Lista2* lst_retira_ant (Lista2* l, int v){
    Lista2* p = l;

    if(p->info == v || p == NULL){
        printf("lista vazia ou nao ha termo anterior.\n");
        return l;
    }

    while(p != NULL && p->info != v){
        p = p->prox;
    }

    if(p == NULL){
        printf("Elemento nao encontrado.\n");
        return l;
    }

    Lista2* ant = p->ant;


    if(ant->ant != NULL){
         ant->ant->prox = p;
    }else{
        l = p;
    }

    p->ant = ant->ant;
    
    free(ant);

    return l;
}

void lst_libera (Lista2* l)
{
	Lista2* p = l;
	while (p != NULL) {
		l = p->prox; 
		free(p); 
	    p = l; 
	}
}