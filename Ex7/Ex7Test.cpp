/*Crie um programa que contenha uma função que permita passar por parametro dois ˆ
numeros inteiros A e B. A função deverá calcular a soma entre estes dois números e ´
armazenar o resultado na variavel A. Esta funçãoo não deverá possuir retorno, mas deverá
modificar o valor do primeiro parametro. Imprima os valores de A e B na função principal. */


#include "Ex7.h"
#include <gtest/gtest.h>

TEST(testSoma, testSoma){
    int n1 = 10,
        n2 = 15;

    const resSoma = 25;
    
    EXPECT_EQ(soma(&n1,n2));
}