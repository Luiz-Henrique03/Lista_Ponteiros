/* Escreva uma função que dado um número real passado como parâmetro, retorne a parte ˆ
inteira e a parte fracionaria deste número. Escreva um programa que chama esta função. ˜
Prototipo: ´
void frac(float num, int* inteiro, float* frac);
*/


#include "Ex17.h"
#include <gtest/gtest.h>

TEST(testFrac, testFrac){
    float num = 10.25,
          fracao = 0,
          fracaoEsperada = -0.25;
    int inteira = 0,
        inteiroEsperado = 10;

    frac(num,&inteira,&fracao);
    EXPECT_EQ(fracao,fracaoEsperada);
    EXPECT_EQ(inteira, inteiroEsperado);
}