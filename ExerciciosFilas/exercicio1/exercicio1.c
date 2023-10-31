#include <stdio.h>
#include <stdlib.h>
#include "filas.h"

int main()
{
    Fila* f1;
    Fila* f2;
    f1 = fila_cria ();
    f2 = fila_cria ();

    fila_insere (f1, 10);
    fila_insere (f1, 30);
    fila_insere (f1, 50);

    fila_insere (f2, 20);
    fila_insere (f2, 40);
    fila_insere (f2, 60);

    fila_imprime(f1);
    fila_imprime(f2);

    fila_libera(f1);
    fila_libera(f2);

    return 1;
}