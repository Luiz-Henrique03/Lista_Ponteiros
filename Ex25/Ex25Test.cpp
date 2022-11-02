/* Faça um programa que possua uma função para ˜
• ler 2 notas e retorna-las por parâmetro (chamar uma função dedicada a ler 2 notas ˜
validas e que devolver os 2 numeros lidos); ´
• calcular a media simples e a media ponderada e retorna-las por parametro, onde a ˆ
segunda nota tem peso 2 media ponderada = (n1 + n2 ∗ 2)/3;*/


#include <gtest/gtest.h>
#include "Ex25.h"

TEST(testMedia, testMedia){
    int nota1 = 0,
       nota2 = 0;
    
    float MediaSimples = 0,
          MediaPonderada = 0,
          MediaSimplesEsperada = 9,
          MediaPonderadaEsperada = 9;
    
    LerNotas(&nota1, &nota2);
    CalcMedia(&nota1, &nota2, &MediaSimples, &MediaPonderada);

    EXPECT_EQ(MediaSimples, MediaSimplesEsperada);
    EXPECT_EQ(MediaPonderada, MediaPonderadaEsperada);
}