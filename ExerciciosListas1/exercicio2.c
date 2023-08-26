#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{   
    Lista* l;
    int n;
    int quantidade;

    printf("Digite n: ");
    scanf(" %d", &n);

    l = lst_cria();

    //Inserindo 2 elementos
    l = lst_insere(l, 10);
    l = lst_insere(l, 20);

    printf ("Contando elementos...\n");
    quantidade = maiores(l, n);

    printf("Ha %d elemento(s) maiores que %d na lista\n", quantidade, n);

    return 0;
}