#include "Ex7.h"
#include <gtest/gtest.h>

TEST(testSoma, testSoma){
    int n1 = 10,
        n2 = 15;

    const resSoma = 25;
    
    EXPECT_EQ(soma(&n1,n2));
}