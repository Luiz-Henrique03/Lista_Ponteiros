/* Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido */

#include <iostream>

using namespace std;

int main(){
    int vet[5] = {2,4,5,6,3},
        *p = vet;
    
    for(int i = 0; i < 5; i++){
        cout << *p * 2 <<endl;
        *p++; 
    }
}