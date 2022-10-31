#include <iostream>
#include "Ex16.h"



int main(){
    int a = 2,
        *b = &a,
        **c = &b,
        ***d = &c;
    NumMultiplicativo(b,c,d);
}