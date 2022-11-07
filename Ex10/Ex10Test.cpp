/* Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido */

#include <gtest/gtest.h>
#include "Ex10.h"


TEST(testDobro, testDobro){
    int vet[5] = {2,4,5,6,3},
        vetorEsperado [5] = {4,8,10,12,6},
        *p = vet;

    Dobro(p);

    EXPECT_EQ(*p,*vetorEsperado);
}