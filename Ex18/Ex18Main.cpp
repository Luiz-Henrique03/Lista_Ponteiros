/*Implemente uma func¸ao que calcule a área da superf ´ ´ıcie e o volume de uma esfera de
raio R. Essa func¸ao deve obedecer ao protótipo: ´
void calc_esfera(float R, float *area, float *volume)
A area da superfıcie e o volume sao dados, respectivamente, por: ˜
A = 4 ∗ p ∗ R2
V = 4/3 ∗ p ∗ R3
*/


#include <iostream>
#include "Ex18.h" 
#include <cmath>

using namespace std;

void calc_esfera(float R, float *area, float *volume){
    const int PI = 3.1415;
    *area = 4 * PI * pow(R,2);
    *volume = ((4/3) * PI) * pow(R,2);
}

int main(){
    float R = 2,
          area = 0,
          volume = 0;

    calc_esfera(2,&area,&volume);
    cout << "Volume: " << volume << endl;
    cout << "Area: " << area << endl;
    
}