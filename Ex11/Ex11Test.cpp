/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares.*/

#include "Ex11.h"
#include <gtest/gtest.h>

TEST(testendPar, testEndPar){

    int Elementos[5] = {1,2,4,5,6};
    int* ptr = EndPar(Elementos);
    EXPECT_EQ(ptr, Elementos);
}

