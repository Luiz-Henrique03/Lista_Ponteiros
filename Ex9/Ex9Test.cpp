#include "Ex9.h"
#include <gtest/gtest.h>

TEST(testImprime, testImprime){
    float matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float matriz2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Imprime(matriz);
    Imprime(matriz2)
    EXPECT_NE(&matriz1, &matriz2);
}