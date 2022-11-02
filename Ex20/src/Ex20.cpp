#include <iostream>
#include "Ex20.h"

using namespace std;

int Negativos(float *vet, int N){
    int Negativos = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] < 0){
           Negativos++;
        }
    }

    return Negativos;
}

