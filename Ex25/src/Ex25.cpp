#include <iostream>
#include "Ex25.h"

using namespace std;

void LerNotas(int *nota1, int *nota2){
    *nota1 = 10;
    *nota2 = 8;
}

void CalcMedia(int *nota1, int *nota2, float *MediaSimples, float* MediaPonderada){
    const int QtdNotas = 2;
    const int Peso1 = 5,
              Peso2 = 3;

    *MediaSimples = (*nota1 + *nota2) / QtdNotas;
    *MediaPonderada = ((*nota1 * Peso1) + (*nota2 * Peso2)) / (Peso1+Peso2);
}

