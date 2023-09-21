#include "listas.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Lista* lst_cria (void)
{
    return NULL;
}

Lista* lst_insere(Lista* l, int matricula, char* nome)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->matricula = matricula;
    strcpy(novo->nome, nome);
    novo->prox = l;

    return novo;
}

void lst_imprime (Lista* l)
{
    Lista* p;
    for (p = l; p != NULL; p = p->prox){
        printf("nome = %s || matricula = %d\n", p->nome, p->matricula);
    }
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