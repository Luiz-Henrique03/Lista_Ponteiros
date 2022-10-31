/*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços é
exiba o maior endereço.*/

#include "Ex2.h"
#include <gtest/gtest.h>

TEST(testMaiorEnd, testmaiorEnd)
{
  int x = 10, 
      y = 20;

   EXPECT_EQ(MaiorEnd(x,y),&x);


  

  
}