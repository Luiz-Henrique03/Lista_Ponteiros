/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.*/

#include <iostream>
#include "Ex9.h"

using namespace std;



int main() {
	float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Imprime(matriz);
	return 0;
}