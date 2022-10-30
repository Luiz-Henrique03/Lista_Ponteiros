#include <iostream>
#include "Ex4.h"

using namespace std;

int main(){
    int n1 = 10,
        n2 = 5;

    troca(&n1,&n2);

    cout << n1 << n2;
}
