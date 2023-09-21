#include <stdio.h>
#include <stdlib.h>

#include "listas.h"

int main()
{   
    Lista* l;
    
    l = lst_cria();
    
    l = lst_insere(l, 10, "joao");
    l = lst_insere(l, 20, "vitor");
    
    lst_imprime(l);

    lst_libera(l);
    return 0;
}