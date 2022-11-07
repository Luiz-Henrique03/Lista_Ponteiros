/* Elabore uma funçãoo que receba duas strings como parâmetros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings.
*/

#include <iostream>
#include "Ex13.h"
#include <string>

using namespace std;

int main(){
    string str1 = "Compudator";
    string str2 = "Comp";

    cout << Comparar(str1,str2);
}