/*Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e ˆ
determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a func¸ao deve retorna para o programa que a chamou o valor 15 e o número 3 ´
(indicando que o numero 15 ocorreu 3 vezes). A função deve ser do tipo ˜ void.*/

#include <gtest/gtest.h>
#include "Ex19.h"


TEST(testVerifica, testVerifica){
    int Elementos [9] = { 5, 2, 15, 3, 7, 15,8, 6, 15},
        Maior = 0,
        frequencia = 0;
        
    Maior = Elementos[0];
    Verifica(Elementos,&Maior,&frequencia);
    EXPECT_EQ(Maior, 15);
    EXPECT_EQ(frequencia, 0);
   
    cout << Maior << " " << frequencia;
}