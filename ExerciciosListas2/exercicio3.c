#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    int tamanhoLista = 0;
    l = lst_cria();

    //Inserindo 2 elementos
    l = lst_insere_fim(l, 10);

    l = lst_insere_fim(l, 20);

    l = lst_insere_fim(l, 30);

    lst_imprime(l);

    l = lst_calculaMedia(l);

    return 0;
}