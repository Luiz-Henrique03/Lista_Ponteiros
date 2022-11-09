/*Considere a seguinte declarac¸ao: int A, *B, **C, ***D; Escreva um programa que leia a 
variavel a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas ´
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo. */

#include <iostream>
#include "Ex16.h"
#include <gtest/gtest.h>



TEST(testNumMultiplicativo, testNumMultiplicativo){
        int a = 2,
        *b = &a,
        **c = &b,
        ***d = &c,
        DobroEsperado = 4,
        TriploEsperado = 6,
        QuadruploEsperado = 8;

    EXPECT_EQ((*b * 2), DobroEsperado);
    EXPECT_EQ((**c * 3), TriploEsperado);
    EXPECT_EQ((***d * 4), QuadruploEsperado);
    
}