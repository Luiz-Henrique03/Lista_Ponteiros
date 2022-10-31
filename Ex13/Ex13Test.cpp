#include <iostream>
#include "Ex13.h"
#include <string>
#include <gtest/gtest.h>

TEST(testComparar, testComparar){
    string str1 = "Compudator";
    string str2 = "Comp";

    EXPECT_EQ(Comparar(str1,str2), true);
}