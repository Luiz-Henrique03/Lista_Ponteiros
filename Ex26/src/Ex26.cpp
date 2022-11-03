#include <iostream>
#include "Ex26.h" 
#include <cmath>

using namespace std;

void raizes(float A, float B,float C,float *X1, float *X2){
        int delta = (B*B) - (4* A * C);

        if(delta<0){
            cout <<"Não tem raízes reais\n";
        }
        else if (delta==0){
            *X1=(-B)/(2*A);
            cout << "Possui apenas uma raiz real: "<<*X1<<endl;
        }else{
            *X1=(-B - sqrt(delta))/(2*A);
            *X2=(-B + sqrt(delta))/(2*A);
        }
}

