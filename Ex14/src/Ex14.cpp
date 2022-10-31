#include <iostream>
#include "Ex14.h"

using namespace std;

void Preenche(int arr[],  int valor){
     int *ptr = arr;
     while(*ptr < 5){
        *ptr = valor;
        *ptr++;
     }
}
