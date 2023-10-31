#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"

int main(){
    Pilha* p;

    p = pilha_cria();
    char string[30];
    printf ("\nDigite uma string: ");
    gets (string);
    
    for (int i=0;i<strlen(string);i++){
        pilha_push (p, string[i]);
        pilha_imprime (p); 
    }
    
    char pal = verifica_palindromo (p, string);
    if (pal==true){
        printf ("\nEh palindromo\n");
    }
    else{
        printf ("\nNAO eh palindromo\n");
        pilha_libera (p);
    }

    system("PAUSE");
    return 1;
}