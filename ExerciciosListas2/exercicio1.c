#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    int tamanhoLista = 0;
    l = lst_cria();

    //Inserindo 2 elementos
    l = lst_insere_inicio(l, -10);
    l = lst_insere_inicio(l, 20);

    lst_imprime(l);
    l = lst_altera(l);
    lst_imprime(l);
    return 0;
}