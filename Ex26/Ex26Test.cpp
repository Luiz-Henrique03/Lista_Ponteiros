#include <iostream>
#include "Ex26.h"
#include <gtest/gtest.h>

using namespace std;

TEST(testBhaskara,testBhaskara){
    float A = 2,
          B = 4,
          C = 6,
          *X1 = 0,
          *X2 = 0;

    raizes(A,B,C,X1,X2);

    EXPECT_EQ(*X1,2);
    EXPECT_EQ(*X2,4);
}