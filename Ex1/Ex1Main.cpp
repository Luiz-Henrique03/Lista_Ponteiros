/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das variáveis antes e após a´
modificação.*/

#include <iostream>
#include "Ex1.h"

using namespace std;


int main()
{
    int i = 1;
    
    float f = 0.6;
    
    char c ='a';
    
    Altera(i,c,f);
    cout << "Inteiro " << i;
    cout << "\n Real " <<  f;
    cout << "\nChar " << c;

}