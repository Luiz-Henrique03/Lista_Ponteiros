#include <iostream>
#include "Ex21.h"

using namespace std;

void AlteraVet(int *vet, int *ptr){
    for(int i = 0; i < 5; i++){
        *(ptr + i) += 1;
    }
}

