#include <iostream>
#include "Ex2.h"

using namespace std;

int* MaiorEnd(int &x, int &y){
      if(&x > &y){
          return &x;
      }else{
          return &y;
      }
}

