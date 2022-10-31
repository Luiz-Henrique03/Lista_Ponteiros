#include "Ex11.h"
#include <gtest/gtest.h>

TEST(testendPar, testEndPar){

    int Elementos[5] = {1,2,4,5,6};
    int* ptr = EndPar(Elementos);
    EXPECT_EQ(ptr, Elementos);
}

