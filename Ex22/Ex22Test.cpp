/*Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar ˜
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
entao a função retornar  a ZERO (0). Caso a função seja concluída com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulação do array.*/

#include <gtest/gtest.h>
#include "Ex22.h"

TEST(testSomaPonteiro, testSomaPonteiro){
    const int TAM = 3;
    int vet1[TAM] = {1,4,5},
        vet2[TAM] = {4,6,3},
        vetEsperado[TAM] = {5,10,8},
        *vet3;
    


    vet3 = soma_ponteiro(vet1,vet2,TAM);
    
    EXPECT_EQ(*vet3,*vetEsperado);

}
