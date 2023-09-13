#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    l = lst_cria();

    printf("l1:\n");
    lst_imprime(l);
    l = inverte(l);
    printf("l1:\n");
    lst_imprime(l);
    
    return 0;
}