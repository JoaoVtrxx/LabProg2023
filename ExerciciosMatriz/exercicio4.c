#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz (int m, int n){
    int **mat;

    mat = (int**)malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++){
        mat[i] = (int*)malloc(n*sizeof(int));
    }

    return mat;
}

int** soma_matriz (int m, int n, int** mat1, int** mat2){
    int **mat3;
    mat3 = aloca_matriz(m,n);

    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        mat3[i][j] = mat1[i][j] + mat2[i][j];
      }
    }

    return mat3;
}

void desaloca_matriz (int m, int** mat){
    for(int i = 0; i < m; i++){
        free(mat[i]);
    }

    free(mat);
}

void imprime_matriz (int m, int n, int** mat){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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
    int **mat1;
    int **mat2;
    int **mat3;

    printf("Digite as linhas. \n");
    scanf("%d", &m);
    printf("Digite as colunas. \n");
    scanf("%d", &n);

    mat1 = aloca_matriz(m,n);
    mat2 = aloca_matriz(m,n);
    preenche_matriz(m, n, mat1);
    preenche_matriz(m, n, mat2);

    mat3 = soma_matriz(m, n, mat1, mat2);

    imprime_matriz(m, n, mat1); 
    imprime_matriz(m, n, mat2); 
    imprime_matriz(m, n, mat3); 

    desaloca_matriz(m, mat1);
    desaloca_matriz(m, mat2); 
    desaloca_matriz(m, mat3);  
    return 0;
}