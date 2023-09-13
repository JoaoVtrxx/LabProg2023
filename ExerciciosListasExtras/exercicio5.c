#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l = lst_cria();
    Lista* l2 = lst_cria();


    l = lst_insere_inicio(l, 30);
    l = lst_insere_inicio(l, 20);
    l = lst_insere_inicio(l, 10);

    l2 = lst_insere_inicio(l2, 30);
    l2 = lst_insere_inicio(l2, 20);
    l2 = lst_insere_inicio(l2, 10);

    printf("l1:\n");
    lst_imprime(l);

    printf("l2:\n");
    lst_imprime(l2);

    igual(l, l2);

    lst_libera(l);
    lst_libera(l2);

    
    return 0;
}