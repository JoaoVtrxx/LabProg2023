# Exercícios sobre filas

1. Faça um programa que imprima uma fila, representada como lista.


2. Implemente uma função que receba 3 filas, f_res, f1 e f2, e transfira alternadamente os
elementos de f1 e f2 para f_res.
Note que, ao final desta função, as filas f1 e f2 vão estar vazias, e a fila f_res vai conter todos os
elementos originalmente em f1 e f2 (inicialmente f_res está vazia). Esta função deve obedecer ao
protótipo:
``` C
    void combina_filas (Fila* f_res, Fila* f1, Fila* f2);
```

3. Escreva uma função em C que retorne, a partir de duas filas ordenadas de inteiros (do menor
para o maior), uma outra fila também ordenada, resultante da concatenaçao das 2 filas de
entrada.<br />Para isto, assuma que as funções básicas de manipulação de filas já estão implementadas, com os
seguintes protótipos: __Fila* fila_cria (void), void INSERE (Fila* fila, int elemento), int RETIRA
(Fila* fila), bool VAZIA (Fila* fila) e int FRENTE (Fila* fila)__. Essas funções correspondem,
respectivamente, a criação da fila, a inserção na fila, remoção da fila, verificação se a fila está vazia
(retorna true se vazia; false caso contrário) e obtenção do elemento da frente da fila (sem removê-
lo). Você pode usar estas funções para a solução da questão.
A função criada deve ter o seguinte protótipo: Fila* ORDENAR (Fila* fila1, Fila* fila2). A fila
resultante já deve ser composta de forma ordenada (não é possível formar a fila resultante
desordenada e depois usar um algoritmo de ordenação!)
