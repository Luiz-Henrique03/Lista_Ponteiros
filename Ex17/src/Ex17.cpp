#include <iostream>
#include "Ex17.h"
#include <math.h>


using namespace std;

void frac(float num, int *inteira, float* frac){
    *inteira = static_cast<int>(num);
    *frac = static_cast<float>(*inteira) - num;
}

