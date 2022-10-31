#include <iostream>
#include "En112.h"

using namespace std;

int Ordena (int* n1, int* n2, int* n3)
{
    int temp;
    if(n1 == n2 && n2 == n3){
        return 1;
    }else{

        if( *n1 > *n2 )
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    };
    if( *n2 > *n3 )
    {
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    };
    if( *n1 > *n2 )
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    };
    return 0;

    }
    
};
