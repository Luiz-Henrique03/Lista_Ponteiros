#include <iostream>
#include "Ex26.h"
#include <cmath>

using namespace std;


int main(){
    float A = 2,
          B = 4,
          C = 6,
          *X1 = 0,
          *X2 = 0;

    raizes(A,B,C,X1,X2);

    cout << *X1 << " " << *X2;
}