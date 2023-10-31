#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"

int main(){
    Pilha* p;

    p = pilha_cria();
        
    printf ("\nInserindo na pilha 10, 20 e 30....\n");
    pilha_push (p, 10);
    pilha_push (p, 20);
    pilha_push (p, 30);

    pilha_imprime(p);

    printf ("\nEsvaziando Pilha...\n");
    pilha_esvazia(p);
    
    pilha_imprime(p);
    pilha_libera(p);

    system("PAUSE");
    return 1;   
}