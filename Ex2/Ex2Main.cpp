/*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços é
exiba o maior endereço.*/

#include <iostream>
#include "Ex2.h"

using namespace std;

int main ()
{
  int x = 10, 
      y = 20;

   cout << &x << endl;
   cout << &y << endl;

  cout << MaiorEnd(x,y) <<endl;

  

  
}