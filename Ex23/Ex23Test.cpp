/*Escreva uma func¸ao que retorna o maior valor de um array de tamanho N. Escreva um 
programa que leia N valores inteiros, imprima o array com k elementos por linha, e o
maior elemento. O valor de k tambem deve ser fornecido pelo usuário.*/

#include <gtest/gtest.h>
#include "Ex23.h"

TEST(testRetornaMaiorValor, testRetornaMaiorValor){
    const int TAM = 5;
    int vet[TAM] = {1,3,4,6,8};
    int Maior = RetornamaiorValor(vet,TAM);
    EXPECT_EQ(Maior, 8);

}