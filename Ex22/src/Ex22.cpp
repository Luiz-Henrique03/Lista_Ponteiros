#include <iostream>
#include "Ex22.h"

using namespace std;

int* soma_ponteiro(int *vet1,int *vet2,int num){
    int vet3[3];
    int *ptr = vet1;
    int *ptr2= vet2;
    int *ptr3= vet3;

    for(int i = 0; i <num; i++){
    	 *(ptr3 + i) = *ptr + *ptr2 ;
         *ptr++;
         *ptr2++;
	}
    return ptr3;
}

