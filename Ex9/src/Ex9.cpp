#include <iostream>
#include "Ex9.h"

using namespace std;

void Imprime(float matriz[3][3]){
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++)
		cout << &matriz[i][j]<< endl;;
	}	
}

