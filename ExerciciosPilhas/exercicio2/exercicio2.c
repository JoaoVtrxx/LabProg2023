#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"

int main(){
    Pilha* p;

    p = pilha_cria();

    // pilha_push (p, 4); ITEM a
    // pilha_push (p, 3);
    // pilha_pop (p);
    // pilha_push(p, 8);
    // pilha_pop (p);

    pilha_push (p, 3); // ITEM b
    pilha_pop (p);
    pilha_pop (p);
    pilha_push (p, 4);
    pilha_push(p, 1);
    pilha_pop (p);
    pilha_push(p, 2);
    pilha_push(p, 3);
    pilha_push(p, 4);
    pilha_push(p, 5);
    pilha_push(p, 6);
    pilha_push(p, 7);
    pilha_push(p, 8);
    
    
    pilha_imprime(p);
    pilha_libera(p);

    system("PAUSE");
    return 1;
}