/*Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar ˜
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
entao a função retornar  a ZERO (0). Caso a função seja concluída com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulação do array.*/

#include <iostream>
#include "Ex22.h"

using namespace std;


int main(){
    const int TAM = 3;
    int vet1[TAM] = {1,4,5},
        vet2[TAM] = {4,6,3},
        *vet3;
    


    vet3 = soma_ponteiro(vet1,vet2,TAM);

    for(int i = 0; i < 3; i++){

        cout << vet3[i] <<endl;
    }
}