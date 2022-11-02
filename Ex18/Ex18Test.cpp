/*Implemente uma func¸ao que calcule a área da superf ´ ´ıcie e o volume de uma esfera de
raio R. Essa func¸ao deve obedecer ao protótipo: ´
void calc_esfera(float R, float *area, float *volume)
A area da superfıcie e o volume sao dados, respectivamente, por: ˜
A = 4 ∗ p ∗ R2
V = 4/3 ∗ p ∗ R3
*/


#include <gtest/gtest.h>
#include "Ex18.h"


TEST(testCalc_Esfera,testCalc_Esfera){
    float R = 2,
          area = 0,
          volume = 0;
    const float VolEsperado = 12;
    const float AreaEsperado = 4;
    
    calc_esfera(2,&area,&volume);
    EXPECT_EQ(volume, VolEsperado);
    EXPECT_EQ(area, AreaEsperado);
    
}