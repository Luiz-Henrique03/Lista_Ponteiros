#include <iostream>
#include "Ex15.h"

using namespace std;

void Imprime(int arr[]){
     int *ptr = arr;
     while(*ptr < 5){
        cout << *ptr << endl;
        *ptr++;
     }
}
