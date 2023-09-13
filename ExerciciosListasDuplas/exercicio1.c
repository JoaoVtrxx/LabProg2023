#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista2* l;
    l = lst_cria();

    l = lst_insere(l, 10);
    l = lst_insere(l, 20);
    l = lst_insere(l, 30);

    lst_imprime(l);

    lst_libera(l);
    return 0;
}