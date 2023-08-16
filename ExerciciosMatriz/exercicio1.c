#include <stdio.h>
#include <stdlib.h>

void imprime_matriz (int m, int n, int* mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i*n+j]);
        }
        printf("\n");
    }
}

void preenche_matriz(int m, int n, int* mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("digite um valor: ");
            scanf("%d", &mat[i*n+j]);
        }
    }
}

int main()
{   
    int m;
    int n;
    int* mat;

    printf("Digite as linhas. \n");
    scanf("%d", &m);
    printf("Digite as colunas. \n");
    scanf("%d", &n);

    mat = (int*)malloc(m*n*sizeof(int));
    if(mat==NULL){
        printf("\nErro na alocacao");
        system("pause");
        exit(1);
    }

    preenche_matriz(m, n, mat);
    imprime_matriz(m, n, mat);  

    free(mat);

    return 0;
}