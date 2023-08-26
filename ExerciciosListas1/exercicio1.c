#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    int tamanhoLista = 0;
    l = lst_cria();

    //Inserindo 2 elementos
    l = lst_insere(l, 10);
    l = lst_insere(l, 20);

    printf ("Contando elementos...\n");
    tamanhoLista = comprimento(l);

    //tamanhoLista deve ser = 2
    printf("Ha %d elementos na lista\n", tamanhoLista);

    return 0;
}