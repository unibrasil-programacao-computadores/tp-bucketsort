#include <stdio.h>
#include <bucketsort.h>

int main(){

    void bucketSort(int vet[], int tam){
        Balde b[numBaldes];
        int i, j, k;
        for(i=0;i<=numBaldes;i++) {
            b[i].topo = 0;
        }
        //verifica balde
        for(i=0;i<tam;i++) {
            j=numBaldes;
            while(j>0){
                if(vet[i] < j*10) {
                b.[j].balde[b[j].topo] = vet[i];
                b[j].topo=b[j].topo + 1;
                break;
            }
        j--;
        }
        }
        for(i=0; i<=numBaldes;i++){
            if(b[i].topo>0){
                void bubbleSort(b[i].balde, b[i].topo); //Método de ordenação (implementar)
            }
        }
        //Retorna os valores ao vetor original
        for(j=0;j<numBaldes;j++){
            for(k=0; k<b[j].topo;k++){
                vet[i]=b[j].balde[k];
                i++
            }
        }
    }
     void bubbleSort(int vet[], int tam);
}