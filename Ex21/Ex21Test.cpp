/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, 
some mais um (+1) a cada posição do array usando o 
ponteiro (use *).
*/


#include <gtest/gtest.h>
#include "Ex21.h"

TEST(testAlteraVet, testAlteraVet){
    int vet[] = {5,10,15,20,25},
        vetEsperado[] = {6,11,16,21,26}. 
    int *pvet = vet;

    EXPECT_EQ(*vet, *vetEsperado);
}

