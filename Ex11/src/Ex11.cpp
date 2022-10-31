#include <iostream>
#include "Ex11.h"


int* EndPar(int *Elementos)
{
    static int *arr = Elementos;

    for(int i = 0; i < 5; i++){
        if(i %2 == 0){
            arr = &Elementos[i];
            *arr++;
        }
    }
 
    
 
    return arr;
}