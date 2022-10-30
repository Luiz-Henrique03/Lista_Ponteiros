#include <iostream>
#include "Ex4.h"

using namespace std;

void trocaMaiorMenor(int *n1, int *n2){
  int temp;
  
  if(*n2 > *n1){
        temp = *n2;
       *n2 = *n1;
       *n1 = temp;
  }
 
}

