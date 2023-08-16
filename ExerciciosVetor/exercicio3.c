#include <stdio.h>
#include <stdlib.h>

void escreve(int *vet){
   
    for(int i = 9; i >=0; i--){
        printf(" %d ", vet[i]);
    }

}

int main()
{   
    int *v;

    v = (int*) malloc(10*sizeof(int));
    if(v==NULL){
        printf("Memoria insuficiente. \n");
        return 1;
    }

    for(int i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
   
    escreve(v);
    free(v);
    return 0;
}