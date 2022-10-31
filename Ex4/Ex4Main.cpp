/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas ˜
2 variaveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas ´
variaveis A e B por exemplo e, após a execuçãoo da função, A conterá o valor de B e B ´
tera o valor de A. */

#include <iostream>
#include "Ex4.h"

using namespace std;

int main(){
    int n1 = 10,
        n2 = 5;

    troca(&n1,&n2);

    cout << n1 << n2;
}
