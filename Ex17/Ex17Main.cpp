/* Escreva uma função que dado um número real passado como parâmetro, retorne a parte ˆ
inteira e a parte fracionaria deste número. Escreva um programa que chama esta função. ˜
Prototipo: ´
void frac(float num, int* inteiro, float* frac);
*/

#include <iostream>
#include "Ex17.h"
#include <math.h>


using namespace std;



int main(){
    float num = 10.25,
          fracao = 0;
    int inteira = 0;

    frac(num,&inteira,&fracao);
    cout << inteira << " " << fracao;
}