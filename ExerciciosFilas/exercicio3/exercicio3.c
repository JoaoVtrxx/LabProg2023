#include <stdio.h>
#include <stdlib.h>
#include "filas.h"

int main()
{
    Fila* f1;
    Fila* f2;
    Fila* res;
    f1 = fila_cria ();
    f2 = fila_cria ();
    res = fila_cria();

    fila_insere (f1, 2);
    fila_insere (f1, 4);
    fila_insere (f1, 6);
    fila_insere (f1, 8);
    fila_insere (f1, 10);

    fila_insere (f2, 1);
    fila_insere (f2, 3);
    fila_insere (f2, 5);
    fila_insere (f2, 7);
    fila_insere (f2, 9);
    fila_insere (f2, 11);
    fila_insere (f2, 12);
    fila_insere (f2, 14);
    fila_insere (f2, 18);
    fila_insere (f2, 20);

    res = ordenar(f1, f2);
    
    fila_imprime(res);

    fila_libera(res);
    return 1;
}