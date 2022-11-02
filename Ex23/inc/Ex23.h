#include <iostream>

using namespace std;

int RetornamaiorValor(int *vet, int tam){
    int Maior = vet[0];
    for(int i = 0; i < tam; i++){
       if(Maior < vet[i]){
           Maior = vet[i];
       }
    }

    return Maior;
}

int main(){
    const int TAM = 5;
    int vet[TAM] = {1,3,4,6,8};
    int Maior = RetornamaiorValor(vet,TAM);

    for(int i = 0; i < TAM; i++){
        cout << vet[i] << endl;
    }

    cout << "Maior valor do vetor: " << Maior;

}