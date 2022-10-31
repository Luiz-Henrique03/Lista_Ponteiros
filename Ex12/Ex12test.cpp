#include "Ex12.h"
#include <gtest/gtest.h>

TEST(testOrdena, testOrdena){
        int n1 = 11,
        n2 = 12,
        n3 = 10;
    Ordena(&n1,&n2,&n3);
    EXPECT_EQ(n1,10);
    EXPECT_EQ(n2,11);
    EXPECT_EQ(n3,12);
}