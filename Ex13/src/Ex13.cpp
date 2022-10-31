#include <iostream>
#include "Ex13.h"
#include <string>

using namespace std;

bool Comparar(string str1, string str2){
    char *ptr1 = &str1[0],
         *ptr2 = &str2[0];

    for(int i = 0; i < str1.length(); i++){
        if(*(ptr1 + i) == (*ptr2 + i)){
            return true;
        }else{
            return false;
        }
    }
}

i