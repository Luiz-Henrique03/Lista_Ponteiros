#include <iostream>
#include "Ex11.h"


using namespace std;
 

 
int main()
{
    int Elementos[5] = {1,2,4,5,6};
    int* ptr = EndPar(Elementos);
    for(int i = 0; i < 5; i++){
        cout << ptr << endl;
    }
    
    return 0;
}