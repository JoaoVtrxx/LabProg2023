#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    l = lst_cria();

    l = lst_insere_inicio(l, 10);
    l = lst_insere_inicio(l, 10);
    l = lst_insere_inicio(l, 20);
    l = lst_insere_inicio(l, 10);
    l = lst_insere_inicio(l, 10);

    printf("print 1:\n");
    lst_imprime(l);
    l = lst_retira(l, 10);
    printf("print 2:\n");
    lst_imprime(l);

    lst_libera(l);
    return 0;
}