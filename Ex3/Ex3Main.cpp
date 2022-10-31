/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do ´
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <iostream>
#include "Ex3.h"

using namespace std;

int main ()
{
  int x = 10, 
      y = 20;

   cout << &x << endl;
   cout << &y << endl;

  cout << MaiorEnd(x,y) <<endl;

  

  
}