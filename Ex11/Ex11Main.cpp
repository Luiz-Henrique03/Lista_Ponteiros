/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares.*/

#include <iostream>
#include "Ex11.h"


using namespace std;
 

 
int main()
{
    int Elementos[5] = {1,2,4,5,6};
    int* ptr = EndPar(Elementos);
    for(int i = 0; i < 5; i++){
        cout << ptr << endl;
    }
    
    return 0;
}