//
// Created by btmluiz on 02/09/2019.
//
#include <iostream>

void sub(double *vet, int *x, int *y);

using namespace std;

int tam = 8;

int main(){
    double vet[tam];
    int x, y;

    for (int i = 0; i < tam; ++i) {
        cout << "Digite o " << i+1 << " posicao: ";
        cin >> vet[i];
    }

    cout << "Agora digite X: ";
    cin >> x;
    cout << "Agora digite Y: ";
    cin >> y;

    sub(vet, &x, &y);
}

void sub(double *vet, int *x, int *y){
    cout << "Soma = " << vet[*x-1] + vet[*y-1];
}