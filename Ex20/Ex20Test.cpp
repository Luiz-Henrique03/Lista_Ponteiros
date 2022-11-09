/*Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos numeros negativos há nesse array. Essa função deve ˜
obedecer ao prototipo: 
int negativos(float *vet, int N);
*/


#include <gtest/gtest.h>
#include "Ex20.h"

TEST(testNegativos, testNegativos){
    const int tamanhoArray = 5,
            NumNegativosEsperado = 2;
    float Elementos[tamanhoArray] = {-1,-2,5,4,6}; 

    int QtdNegativos = Negativos(Elementos, tamanhoArray);

    EXPECT_EQ(QtdNegativos, NumNegativosEsperado);
}