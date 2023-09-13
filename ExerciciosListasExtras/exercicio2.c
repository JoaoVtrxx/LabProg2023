#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    Lista* l2;
    l = lst_cria();
    l2 = lst_cria();

    l = lst_insere_inicio(l, 50);
    l = lst_insere_inicio(l, 40);
    l = lst_insere_inicio(l, 30);
    l = lst_insere_inicio(l, 20);
    l = lst_insere_inicio(l, 10);

    printf("l1:\n");
    lst_imprime(l);
    printf("l2: \n");
    lst_imprime(l2);
    l2 = separa(l, 40);
    printf("l1:\n");
    lst_imprime(l);
    printf("l2: \n");
    lst_imprime(l2);

    lst_libera(l);
    lst_libera(l2);
    return 0;
}