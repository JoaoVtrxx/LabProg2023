#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"

int main(){
    Pilha* p;
    float topo;
    p = pilha_cria();

    printf ("\nInserindo na pilha 10, 20 e 30....\n");
    pilha_push (p, 10);
    pilha_push (p, 20);
    pilha_push (p, 30);

    // printf ("\nRemovendo o topo: ");
    // topo = pilha_pop (p);
    // printf ("foi removido o %.2f", topo);
    // printf ("\nRemovendo o topo: ");
    // topo = pilha_pop (p);
    // printf ("foi removido o %.2f", topo);
    // printf ("\nRemovendo o topo: ");
    // topo = pilha_pop (p);
    // printf ("foi removido o %.2f", topo);
    
    pilha_imprime(p);

    pilha_libera(p);

    system("PAUSE");
    return 1;
}