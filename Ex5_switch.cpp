#include <iostream>

using namespace std;

const int MAX_ALUNOS = 30;

int main () {

    int opcao;

    cout << "1 - somar\n";
    cout << "2 - subtrair \n";
    cout << "0 - sair \n";
    cout << "opcao: ";

    cin >> opcao;

    switch (opcao)
    {
        case 1:
            cout << "BATMAN";
            break;
        case 2:
            cout << "MIRANHA";
            break;
        case 0:
            cout << "SUPER FRANGO";
            break;
        default:
            cout << "SAPATO SEM FREIO";
            break;




    }



    return 0;

}


