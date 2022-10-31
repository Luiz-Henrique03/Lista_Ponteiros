/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.*/

#include "Ex9.h"
#include <gtest/gtest.h>

TEST(testImprime, testImprime){
    float matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float matriz2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    EXPECT_NE(&matriz1, &matriz2);
}