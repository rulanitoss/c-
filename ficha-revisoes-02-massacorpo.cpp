#include <iostream>

using namespace std;

int main() {
    float peso;
    float aceleracao;
    float massa;
    cout<<"qual o peso do objeto: ";
    cin>>peso;
    cout<<"escreva a aceleração da gravidade: ";
    cin>>aceleracao;
    massa = (peso/aceleracao);
    cout<<"A massa do objeto e: "<< massa <<endl;


return 0;
}
