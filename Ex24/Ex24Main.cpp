/* Escreva uma função que receba um array de inteiros V e os enderec¸os de duas variáveis ´
inteiras, min e max, e armazene nessas variaveis o valor mínimo e maximo do array. ´
Escreva tambem uma função main que use essa função. */

#include <iostream>
#include "Ex24.h"

using namespace std;

int main(){
    
    int vetor[] = {4,7,5,3,2},
         maximo = 0,
         minimo = 0;
    
    maiorMenor(vetor, &maximo, &minimo);
    cout << maximo << " " << minimo;
}