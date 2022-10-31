#include <iostream>
#include "Ex14.h"

using namespace std;



int main(){
    int vet[5] = {},
        val = 10;
    Preenche(vet,val);
    
    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }
}