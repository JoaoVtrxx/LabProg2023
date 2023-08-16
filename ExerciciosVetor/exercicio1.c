#include <stdio.h>
#include <stdlib.h>


int negativos (int n, float *v){
    int quantidade = 0;

    for(int i = 0; i < n; i++){
        if(v[i] < 0){
            quantidade++;
        }
    }

    return quantidade;
}

int main()
{   
    int quantidade;
    int n;
    float *v;

    printf("Digite n: ");
    scanf("%d", &n);

    v = (float*) malloc(n*sizeof(float));
    if(v==NULL){
        printf("Memoria insuficiente. \n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &v[i]);
    }
    
    quantidade = negativos(n, v);
    printf("quantidade: %d\n", quantidade);
}