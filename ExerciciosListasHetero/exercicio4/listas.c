#include "listas.h"
#include <stdlib.h>
#include <stdio.h>

ListaHet* lst_cria (void)
{
    return NULL;
}

ListaHet* lst_insere(ListaHet* l, void* info, int tipo)
{   
    ListaHet* novo = (ListaHet*) malloc(sizeof(ListaHet));
    
    novo->info = info;
    novo->tipo = tipo;
    novo->prox = l;

    return novo;
}

void lst_imprime (ListaHet* l)
{
    ListaHet* p;
    for (p = l; p != NULL; p = p->prox){
        if(p->tipo == 0){
            Professor* r = (Professor*)p->info;
            printf("nome = %s || codigo = %d || salario = %.2f\n", r->nome, r->codigo, r->salario);
        }else if(p->tipo == 1){
            Aluno* r = (Aluno*)p->info;
            printf("nome = %s || matricula = %d\n", r->nome, r->matricula);
        }
    }
}
