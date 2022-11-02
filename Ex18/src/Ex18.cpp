#include <iostream>
#include "Ex18.h"
#include <cmath>

using namespace std;

void calc_esfera(float R, float *area, float *volume){
    const int PI = 3.1415;
    *area = 4 * PI * pow(R,2);
    *volume = ((4/3) * PI) * pow(R,2);
}

