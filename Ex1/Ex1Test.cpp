/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das variáveis antes e após a´
modificação.*/


#include "Ex1.h"
#include <gtest/gtest.h>

TEST(testAltera, testAltera){
    int i = 1;

    const int INTAlterado = 2;
    const char CHARAlterado = 'S';
    const float FLOATAlterado = 10.8;
    
    float f = 0.6;
    
    char c ='a';
    
    Altera(i,c,f);
    EXPECT_EQ(i,INTAlterado);
    EXPECT_EQ(f,FLOATAlterado);
    EXPECT_EQ(c,CHARAlterado);
    
}