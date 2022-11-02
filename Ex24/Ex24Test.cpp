/* Escreva uma função que receba um array de inteiros V e os enderec¸os de duas variáveis ´
inteiras, min e max, e armazene nessas variaveis o valor mínimo e maximo do array. ´
Escreva tambem uma função main que use essa função. */

#include <gtest/gtest.h>
#include "Ex24.h"

using namespace std;


TEST(testmaiorMenor, testmaiorMenor){
        int vetor[] = {4,7,5,3,2},
         maximo = 0,
         maximoEsperado = 7,
         minimoEsperado = 2,
         minimo = 0;
    
    maiorMenor(vetor, &maximo, &minimo);
    EXPECT_EQ(maximo,maximoEsperado);
    EXPECT_EQ(minimo, minimoEsperado);
}