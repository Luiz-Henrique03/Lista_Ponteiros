/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do ´
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include "Ex3.h"
#include <gtest/gtest.h>

TEST(testMaiorEnd, testmaiorEnd)
{
  int x = 10, 
      y = 20;

   EXPECT_EQ(MaiorEnd(x,y),10);


  

  
}