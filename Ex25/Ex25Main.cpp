/* Faça um programa que possua uma função para ˜
• ler 2 notas e retorna-las por parâmetro (chamar uma função dedicada a ler 2 notas ˜
validas e que devolver os 2 numeros lidos); ´
• calcular a media simples e a media ponderada e retorna-las por parametro, onde a ˆ
segunda nota tem peso 2 media ponderada = (n1 + n2 ∗ 2)/3;*/

#include <iostream>
#include "Ex25.h"

using namespace std;



int main(){
    int nota1 = 0,
       nota2 = 0;
    
    float MediaSimples = 0,
          MediaPonderada = 0;
    
    LerNotas(&nota1, &nota2);
    CalcMedia(&nota1, &nota2, &MediaSimples, &MediaPonderada);

    cout << nota1 << " " << nota2 << endl;
    cout << MediaSimples << " " << MediaPonderada;

}