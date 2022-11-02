#include <iostream>
#include "Ex24.h"

using namespace std;

void maiorMenor(int vetor[], int* maximo, int* minimo){
    *maximo = vetor[0];
    *minimo = vetor[0];
    for(int i = 0; i < 5; i++){
       if(*maximo < vetor[i]){
           *maximo = vetor[i];
       }
    }

    for(int i = 0; i < 5; i++){
       if(*minimo > vetor[i]){
           *minimo = vetor[i];
       }
    }
    
}
