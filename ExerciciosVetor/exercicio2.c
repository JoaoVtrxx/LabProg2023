#include <stdio.h>
#include <stdlib.h>

void inverte(int n, int *vet){
    float tamanho = (float)n/2;
    int ajudante;

    for(int i= 0; i < tamanho-1; i++){
        ajudante = vet[n-i-1];
        vet[n-i-1] = vet[i];
        vet[i] = ajudante;
    }

    for(int i = 0; i < n; i++){
        printf("%d", vet[i]);
    }
}

int main()
{   
    int n;
    int *v;

    printf("Digite n: ");
    scanf("%d", &n);

    v = (int*) malloc(n*sizeof(int));
    if(v==NULL){
        printf("Memoria insuficiente. \n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
   
    inverte(n, v);
    free(v);
    return 0;
}