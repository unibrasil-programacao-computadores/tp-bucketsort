#include <stdio.h>
#define tamBalde 10
#define numBaldes 10
#define max 10

typedef struct {
    int balde[tamBalde];
    int topo;
} Balde;

void bucketSort(int vet[], int tam);

void bubbleSort(int vet[], int tam);
