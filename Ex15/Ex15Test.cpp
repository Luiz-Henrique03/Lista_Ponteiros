/* Crie uma func¸ao que receba como parâmetro um array e o imprima. Não utilize índices
para percorrer o array, apenas aritmetica de ponteiros. */

#include <iostream>
#include "Ex15.h"
#include <gtest/gtest.h>

using namespace std;


TEST(testPreenche, testPreenche){
    int vet[5] = {},
        vetEsperado = {10,10,10,10,10},
        val = 10;
    Preenche(vet,val);
}
