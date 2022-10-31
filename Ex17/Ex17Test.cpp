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