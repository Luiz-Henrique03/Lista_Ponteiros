/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois numeros lidos. A funçãoo deverá armazenar o dobro ´
de A na propria variável A e o dobro de B na própria variável B*/

#include "Ex6.h"
#include <gtest/gtest.h>


TEST(testSoma, testSoma){
    	int A = 2, 
        B = 4;

   Dobro(&A, &B);
   EXPECT_EQ(Soma(&A,&B),12);
}