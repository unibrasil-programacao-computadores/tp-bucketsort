#include <stdio.h>
#include <stdlib.h>
#include "bucketsort.h"

static void ordena_insertion(int *vetor, int tamanho) {
  for  (int i = 1; i < tamanho; ++i) {
int atual = vetor[i];
int j = i - 1;

     while (j >= 0 && vetor[j] > atual) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = atual;
}
}

void ordena_baldes(int *vetor, int tamanho) {
      int *baldes[QTDE_BALDES];
int tam_baldes[QTDE_BALDES] = {0};

     for (int i = 0; i < QTDE_BALDES; ++i)
        {
        baldes[i] = malloc(sizeof(int) * tamanho);
    }

    for (int i = 0; i < tamanho; ++i)
    {
             int indice = vetor[i] / 10;
        if (indice >= QTDE_BALDES) indice = QTDE_BALDES - 1;
                baldes[indice][tam_baldes[indice]++] = vetor[i];
       }

int posicao = 0;
        for (int b = 0; b < QTDE_BALDES; ++b) {
        ordena_insertion(baldes[b], tam_baldes[b]);

    for (int j = 0; j < tam_baldes[b]; ++j)
{
            vetor[posicao++] = baldes[b][j];
        }

free(baldes[b]);
    }
}
