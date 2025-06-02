#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "bucketsort.h"

int main() {
       int vetor[TAM_VETOR];

srand((unsigned int)time(NULL));

 for (int i = 0; i < TAM_VETOR; ++i)
    {
        vetor[i] = rand() % 100;
    }

printf("vetor desordenado:");
    for (int i = 0; i < TAM_VETOR; ++i)
     {
          printf("%d%c", vetor[i], (i < TAM_VETOR - 1) ? ' ' : '\n');
}

  ordena_baldes(vetor, TAM_VETOR);

   printf("\n Vetor ordedado:");
      for (int i = 0; i < TAM_VETOR; ++i)
       {
    printf("%d%c", vetor[i], (i < TAM_VETOR - 1) ? ' ' : '\n');
    }

    return 0;
}
