#include <iostream>
#include "Ex16.h"
#include <gtest/gtest.h>



TEST(testNumMultiplicativo, testNumMultiplicativo){
        int a = 2,
        *b = &a,
        **c = &b,
        ***d = &c,
        DobroEsperado = 4,
        TriploEsperado = 6,
        QuadruploEsperado = 8;

    EXPECT_EQ((*b * 2), DobroEsperado);
    EXPECT_EQ((**c * 3), TriploEsperado);
    EXPECT_EQ((***d * 4), QuadruploEsperado);
    
}