#include "listas.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

Lista* lst_retira (Lista* l, int v){
    Lista* ant = NULL; 
    Lista* p = l; 
  
    while (p != NULL)
    { 
        if(p->info == v){
            if (ant == NULL)
            { 
                l = p->prox;
            }else { 
                ant->prox = p->prox;
            }
        }else {
            ant = p;
        }

        p = p->prox; 

    }
    
    if (p == NULL){
        return l; 
    }


    free(p);
    return l;
}

Lista* separa (Lista* l, int n){

    Lista* p;
    Lista* l2 = NULL;
    p = l;

    while(p != NULL && p->info != n){
        p = p->prox;
    }
    
    
    l2 = p->prox;
    p->prox = NULL;
    return l2;
}

Lista* merge (Lista* l1, Lista* l2){
    Lista* p1 = l1;
    Lista* p2 = l2;
    Lista* l3 = NULL;

    while(p1 != NULL || p2 != NULL){
        if(p1 != NULL){
            l3 = lst_insere_fim(l3, p1->info);
            p1 = p1->prox;
        }
        if(p2 != NULL){
            l3 = lst_insere_fim(l3, p2->info);
            p2 = p2->prox;
        }
    }
    


    return l3;
}

Lista* inverte (Lista* l){
    if(l == NULL){
        return l;
    }

    Lista* ant = NULL;
    Lista* p = l;
    Lista* dep = p->prox;


    while(dep != NULL){
        p->prox = ant;
        ant = p;
        p = dep;
        dep = dep->prox;
    }

    p->prox = ant;

    return p;
}

void lst_libera (Lista* l)
{
	Lista* p = l;
	while (p != NULL) {
		l = p->prox; 
		free(p); 
	    p = l; 
	}
}

void igual (Lista* l1, Lista* l2){
    Lista* p1 = l1;
    Lista* p2 = l2;

    while(p1 != NULL && p2 != NULL && p1->info == p2->info){
        p1 = p1->prox;
        p2 = p2->prox;
    }

    if(p1 != p2){
        printf("diferentes\n");
    }else{
        printf("iguais\n");
    }
}

Lista* copia (Lista* l){
    Lista* p;
    Lista* copia = NULL;

    p = l;

    while(p != NULL){
        copia = lst_insere_fim(copia, p->info);
        p = p->prox;
    }

    return copia;
}
