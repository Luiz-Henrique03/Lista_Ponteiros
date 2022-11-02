/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, 
some mais um (+1) a cada posição do array usando o 
ponteiro (use *).
*/

#include <iostream>
#include "Ex21.h"

using namespace std;

void AlteraVet(int *vet, int *ptr){
    for(int i = 0; i < 5; i++){
        *(ptr + i) += 1;
    }
}


int main(){
    int vet[] = {5,10,15,20,25};
    int *pvet = vet;

    AlteraVet(vet, pvet);

    for(int i = 0; i < 5; i++){

        cout << pvet[i] <<endl;
    }
}