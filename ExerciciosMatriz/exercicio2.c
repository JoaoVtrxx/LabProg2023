#include <stdio.h>
#include <stdlib.h>

void imprime_matriz (int m, int n, int** mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void preenche_matriz(int m, int n, int** mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("digite um valor: ");
            scanf("%d", &mat[i][j]);
        }
    }
}

int main()
{   
    int m;
    int n;
    int **mat;

    printf("Digite as linhas. \n");
    scanf("%d", &m);
    printf("Digite as colunas. \n");
    scanf("%d", &n);

    mat = (int**)malloc(m*sizeof(int*));

    for(int i = 0; i < m; i++){
        mat[i] = (int*)malloc(n*sizeof(int));
    }

    preenche_matriz(m, n, mat);
    imprime_matriz(m, n, mat);  

    for(int i = 0; i < m; i++){
        free(mat[i]);
    }
    
    free(mat);

    return 0;
}