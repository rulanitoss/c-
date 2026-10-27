#include <iostream>

using namespace std;

int main() {
    float Farenheit,calculo;
    cout<<"Escreva a temperatura em Farenheit : ";
    cin>>Farenheit;
    calculo=Farenheit-32;
    calculo=calculo*5;
    calculo=calculo/9;

    cout<<"A temperatura convertida para Farenheit e "<<calculo<<endl;



return 0;
}
