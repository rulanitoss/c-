#include <iostream>
using namespace std;

int main() {
    int numero1,numero2,numero3;
    float media;
    cout<<"Diga tres numeros inteiros para fazer a media dos 3:\n ";
    cout<<"numero1:\n ";
    cin>>numero1;
    cout<<"numero2:\n ";
    cin>>numero2;
    cout<<"numero3:\n ";
    cin>>numero3;

    media=(numero1+numero2+numero3)/3;
    cout<<"a media é "<<media<<endl;

return 0;
}
