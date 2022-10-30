#include <iostream>
#include "Ex8.h"

using namespace std;

void Imprime(int *vet){
    for(int i = 0; i < 10; i++){
        cout << "Endereco:" <<vet + i <<"\tConteudo:"<<*(vet + i)<<"\n";

    }
}

