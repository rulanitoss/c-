#include <iostream>

using namespace std;

int main () {
    string nome,localidade,genero,mensagem;
    int idade;
    cout<<"Escreva o seu nome: ";
    cin>>nome;
    cout<<"Qual a sua idade: ";
    cin>>idade;
    cout<<"qual a sua localidade: ";
    cin>>localidade;
    cout<<"Qual o seu genero?(M/F)";
    cin>>genero;

    if (genero == "M") {
            mensagem="Caro Sr. " + nome;

        if(idade>=18) {
            mensagem=mensagem + nome + "e maior de 18";
        }else {
            mensagem = mensagem + " e menor de 18 ";

        }
        mensagem = mensagem + "e mora em " + localidade;
    }
    else if (genero == "F") {
            mensagem="Cara Sr. " + nome;

        if(idade>=18) {
            mensagem=mensagem + nome + "e maior de 18";
        }else {
            mensagem = mensagem + " e menor de 18 ";

        }
        mensagem = mensagem + "e mora em " + localidade;

    }
    cout<<mensagem<<endl;



return 0;
}
