#include "Ex4.h"
#include <gtest/gtest.h>


TEST(testTroca, testTroca){
    int n1 = 10,
        n2 = 5;
    const int ResultadoTrocadoN1 = 5;
    const int ResultadoTrocadoN2 = 10;
    

    troca(&n1,&n2);

    EXPECT_EQ(n1, ResultadoTrocadoN1);
    EXPECT_EQ(n2, ResultadoTrocadoN2);
    
} 
