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

    fila_insere (f1, 10);
    fila_insere (f1, 30);
    fila_insere (f1, 50);

    fila_insere (f2, 20);
    fila_insere (f2, 40);
    fila_insere (f2, 60);

    combina_filas (res, f1, f2);

    fila_imprime(res);

    fila_libera(f1);
    fila_libera(f2);
    fila_libera(res);
    return 1;
}