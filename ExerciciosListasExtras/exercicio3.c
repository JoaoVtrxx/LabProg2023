#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    Lista* l2;
    Lista* l3;
    l = lst_cria();
    l2 = lst_cria();
    l3 = lst_cria();

    l2 = lst_insere_inicio(l2, 60);
    l2 = lst_insere_inicio(l2, 50);
    l2 = lst_insere_inicio(l2, 40);
    l = lst_insere_inicio(l, 30);
    l = lst_insere_inicio(l, 20);
    l = lst_insere_inicio(l, 10);

    printf("l1:\n");
    lst_imprime(l);
    printf("l2: \n");
    lst_imprime(l2);

    l3 = merge(l, l2);

    printf("l3:\n");
    lst_imprime(l3);

    lst_libera(l);
    lst_libera(l2);
    lst_libera(l3);
    return 0;
}