#include <iostream>
#include "Ex19.h"

using namespace std;

void Verifica(int *Elementos, int * Maior, int *frequencia){
 for(int i = 0; i < 9; i++){
        if(*Maior < Elementos[i]){
            *Maior = Elementos[i];
        }

        if(*Maior == Elementos[i]){
             *frequencia++;
        }
    }

}


