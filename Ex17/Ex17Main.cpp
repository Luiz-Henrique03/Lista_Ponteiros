#include <iostream>
#include "Ex17.h"
#include <math.h>


using namespace std;



int main(){
    float num = 10.25,
          fracao = 0;
    int inteira = 0;

    frac(num,&inteira,&fracao);
    cout << inteira << " " << fracao;
}