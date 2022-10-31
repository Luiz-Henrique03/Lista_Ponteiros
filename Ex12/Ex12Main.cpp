/* Faça um programa que leia tres valores inteiros e chame uma função que receba estes 3 
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.*/

#include <iostream>
#include "Ex12.h"

using namespace std;

int main(){
    int n1 = 11,
        n2 = 12,
        n3 = 10;
    Ordena(&n1,&n2,&n3);
    cout << n1 << " " << n2 << " " << n3 << " " << endl; 
}