#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listas.h"

int main()
{   
    ListaHet* l;
    Professor* prof1 = (Professor*) malloc(sizeof(Professor));
    Aluno* aluno1 = (Aluno*) malloc(sizeof(Aluno));
    
    prof1->codigo = 101;
    strcpy(prof1->nome, "jose");
    prof1->salario = 1300.50;

    aluno1->matricula = 2020;
    strcpy(aluno1->nome, "marco");


    l = lst_cria();
    
    l = lst_insere(l, prof1, 0);
    l = lst_insere(l, aluno1, 1);
    
    lst_imprime(l);


    return 0;
}