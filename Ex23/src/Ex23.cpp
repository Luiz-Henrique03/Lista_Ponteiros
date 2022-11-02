#include <iostream>
#include "Ex23.h"

using namespace std;

int RetornamaiorValor(int *vet, int tam){
    int Maior = vet[0];
    for(int i = 0; i < tam; i++){
       if(Maior < vet[i]){
           Maior = vet[i];
       }
    }

    return Maior;
}
