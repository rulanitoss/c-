#include <iostream>
#include <string>

using namespace std;

int main () {

    int opcao;
    for (int i=0;i<1;i=0) {
        cout << "Digite um numero entre 1 e 3:\n";
        cout << "Opçoes disponiveis:\n"<<"(0) sair do programa\n"<<"(1) e bom programador\n"<<"(2) e muito bom programador\n"<<"(3) e excelente programador"<<endl;
        cin >> opcao;

        switch (opcao)
        {
            case 0:
                cout << "Programa fechado;";
                break;
            case 1:
                cout << "E bom programador";
                break;
            case 2:
                cout <<"E muito bom programador";
                break;
            case 3:
                cout <<"E excelente programador";
                break;
            default :
                cout <<"Nao sei oque estas a pedir";

        }
        if (opcao == 0) break;
    }





return 0;
}
