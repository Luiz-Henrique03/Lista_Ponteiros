#include <iostream>
#include "Ex16.h"

using namespace std;

void NumMultiplicativo(int *b, int **c, int ***d) {

	cout << "\nDobro: " << (*b * 2) << endl;
	cout << "\nTriplo: " << (**c * 3) << endl;
	cout << "\nQuadruplo: " << (***d * 4) << endl; 
	
}

