#include <stdio.h>
#include <stdlib.h>

int *alocaVetor(int n){
    
    int *v;
    
    v = (int*) malloc(n*sizeof(int));
    if(v==NULL){
        printf("Memoria insuficiente. \n");
        exit(1);
    }

    return v;
}

void leVetor(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &v[i]);
    }
}

float calculaMedia(int *v, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }

    return soma/n;
}

float verificaPercentual(int *v, int n, float media){
    float maiores = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > media){
            maiores++;
        }
    }

    return (float)maiores/n;
}

int main()
{   
    int n;
    int *v;
    float media;
    float percentual;

    printf("Digite n: ");
    scanf("%d", &n);

    v = alocaVetor(n);
    leVetor(v, n);
    media = calculaMedia(v, n);
    percentual = verificaPercentual(v, n, media);
    free(v);

    printf("percentual = %.2f ", percentual);
    
    return 0;
}