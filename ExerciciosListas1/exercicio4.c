#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l1;
    Lista* l2;
    Lista* l3;

    l1 = lst_cria();
    l2 = lst_cria();
    l3 = lst_cria();

    l1 = lst_insere(l1, 10);
    l1 = lst_insere(l1, 20);
    l1 = lst_insere(l1, 30);

    l2 = lst_insere(l2, 40);
    l2 = lst_insere(l2, 50);

    printf("Imprimindo l1: \n");
    lst_imprime(l1);

    printf("\nImprimindo l2: \n");
    lst_imprime(l2);

    l3 = concatena(l1, l2);
    
    printf("\nImprimindo l3: \n");
    lst_imprime(l3);

    return 0;
}