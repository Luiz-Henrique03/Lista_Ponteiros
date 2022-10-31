/* Faça um programa que leia dois valores inteiros e chame uma função que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na ´
segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/

#include <iostream>
#include "Ex5.h"

using namespace std;

int main(){
    int n1 = 10,
        n2 = 5;

    trocaMaiorMenor(&n1,&n2);

    cout << n1 << n2;
}
