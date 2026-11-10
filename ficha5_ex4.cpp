#include <iostream>

using namespace std;

#define N 10

int main () {
    int aux, number;
    int numeros[N] {1, 12, 5, 6, 2,13, 7, 4, 0, 3};



    for (int j=0; j<(N-1);j++ ) {
        for (int i=(j+1); i<N;i++) {
            if (numeros[0] < numeros[i] ) {
            aux = numeros[i];
            numeros[i] =  numeros[j];
            numeros[j] = aux;
            }
        }
    }
    for (int i=0;i<N;i++) {
        cout<<numeros[i]<<" ";
    }



return 0;
}
