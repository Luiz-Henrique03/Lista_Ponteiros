#include "Ex6.h"
#include <gtest/gtest.h>


TEST(testSoma, testSoma){
    	int A = 2, 
        B = 4;

   Dobro(&A, &B);
   EXPECT_EQ(Soma(&A,&B),12);
}