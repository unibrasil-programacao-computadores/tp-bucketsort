#include "sort.h"

int compare(const void* a, const void* b)
{
    double diff =  *(double*)a - *(double*)b;
    return diff > 0 ? 1 : diff < 0 ? -1 : 0;
}

void quicksort(double* arr, long arr_size)
{
    qsort(arr, arr_size, sizeof(double), compare);
}

void ordena_baldes(double *arr, long arr_size)
{
 double *baldes [QTDE_BALDES];
 int tam_baldes[QTDE_BALDES] = {0};
 int capacidade_balde = arr_size / QTDE_BALDES + 1000;


 for(int i = 0; i < QTDE_BALDES; i++){
    baldes[i] = malloc(sizeof(double) * capacidade_balde);
    if (baldes[i] == NULL){
        for (int j=0; j<i;j++)free(baldes[j]);
        exit(1);
    }

 }
double min  = arr[0], max = arr[0];

for(long i = 1; i < arr_size; i++){
    if (arr[i] < min) min = arr[i];
    if (arr[i] > max) max = arr[i];
    }
    double intervalo = (max - min) / QTDE_BALDES;

 for(long i = 0; i<arr_size; i++){
    int indice = (int)((arr[i]- min) / intervalo);
    if(indice >= QTDE_BALDES) indice = QTDE_BALDES - 1;
    baldes[indice][tam_baldes[indice]++]= arr[i];
}
long posicao = 0;
for(int b = 0; b < QTDE_BALDES; b++){
        if(tam_baldes[b] > 0)quicksort(baldes[b], tam_baldes[b]);

    for (int j = 0; j <tam_baldes[b]; j++) arr[posicao++] = baldes[b][j];

        free(baldes[b]);
    }

}
