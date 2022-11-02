/*Implemente uma func¸ao que receba como parâmetro um array de números reais de
tamanho N e retorne quantos numeros negativos há nesse array. Essa função deve ˜
obedecer ao prototipo: ´
int negativos(float *vet, int N);
*/

#include <iostream>
#include "Ex20.h"

using namespace std;



int main(){
    const int tamanhoArray = 5;
    float Elementos[tamanhoArray] = {-1,-2,5,4,6}; 

    int QtdNegativos = Negativos(Elementos, tamanhoArray);

    cout << QtdNegativos;
}