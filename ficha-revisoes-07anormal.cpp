#include <iostream>

using namespace std;

int main() {
    int numero_inteiro1,numero_inteiro2;
    float numero_real,calculo_a,calculo_b,calculo_c;
    cout<<"Escreva um numero inteiro: ";
    cin>>numero_inteiro1;
    cout<<"Escreva outro numero inteiro: ";
    cin>>numero_inteiro2;
    cout<<"Escreva um numero real: ";
    cin>>numero_real;

    calculo_a = (numero_inteiro1*2)*(numero_inteiro2/2);
    cout<<"a multiplicação do dobro do segundo com metade do primeiro e "<< calculo_a <<endl;

    calculo_b=3*numero_real+numero_inteiro1;
    cout<<"a soma do triplo do terceiro com o primeiro e "<< calculo_b <<endl;

    calculo_c=(numero_real*numero_real*numero_real);
    cout<<"o terceiro elevado ao cubo e "<< calculo_c <<endl;




return 0;
}
