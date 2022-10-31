/*Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do ˆ
array. A função deverá preencher os elementos de array com esse valor. Não utilize ˜
´ındices para percorrer o array, apenas aritmetica de ponteiros.*/

#include <iostream>
#include "Ex14.h"

using namespace std;



int main(){
    int vet[5] = {},
        val = 10;
    Preenche(vet,val);
    
    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }
}