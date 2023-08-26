#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    
    l = lst_cria();

    //Inserindo 2 elementos
    l = lst_insere(l, 333);
    l = lst_insere(l, 10);
    l = lst_insere(l, 20);

    l = ultimo(l);

    printf("ultimo elemento %d\n", l->info);

    return 0;
}