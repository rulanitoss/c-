#include <iostream>
#include <string>

using namespace std;

int main () {
    int opcao;
    int numero;
    int opcao2;
    double numero1;
    double numero2;
    string nm;

    cout << "Qual o seu nome?\n";
    cin >> nm;
    cout << "\nOpções\n";
    cout << "Escolha uma opção, " << nm << ":\n";
    cout << "1 - tabuada\n2 - operações\n3 - par ou ímpar\n";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Escolheu tabuada\n";
            break;
        case 2:
            cout << "Escolheu operações\n";
            break;
        case 3:
            cout << "Escolheu par ou ímpar\n";
            break;
    }


    if (opcao == 1)
    {
        cout << "Quer saber a tabuada de qual numero, " << nm << "? ";
        cin >> numero;

        // CORREÇÃO 1: O loop 'for' agora está DENTRO do if da opção 1
        for (int i = 1; i <= 10; i++){
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    }


    if (opcao == 2)
    {
        cout << " operacoes disponiveis:\n";
        cout << "4 - soma\n5 - subtração\n6 - multiplicação\n7 - divisão\n";
        cin >> opcao2;


        switch (opcao2)
        {
            case 4:
                cout << "Você escolheu a soma\n";
                break;
            case 5:
                cout << "Você escolheu a subtração\n";
                break;
            case 6:
                cout << "Você escolheu a multiplicação\n";
                break;
            case 7:
                cout << "Você escolheu a divisão\n";
                break;
        }

        if (opcao2 == 4)
        {
            cout << "Digite os numeros para a soma\n";
            cout << "Numero1:\n";
            cin >> numero1;
            cout << "Numero2:\n";
            cin >> numero2;
            cout << "Resultado = " << numero1 + numero2 << endl;
        }
        else if (opcao2 == 5)
        {
            cout << "Digite os numeros para a subtração\n";
            cout << "Numero1:\n";
            cin >> numero1;
            cout << "Numero2:\n";
            cin >> numero2;
            cout << "Resultado = " << numero1 - numero2 << endl;
        }
        else if (opcao2 == 6)
        {
            cout << "Digite os numeros para a multiplicação\n";
            cout << "Numero1:\n";
            cin >> numero1;
            cout << "Numero2:\n";
            cin >> numero2;
            cout << "Resultado = " << numero1 * numero2 << endl;
        }
        else if (opcao2 == 7)
        {
            cout << "Digite os numeros para a divisao\n";
            cout << "Numero1:\n";
            cin >> numero1;
            cout << "Numero2:\n";
            cin >> numero2;


            if (numero2 == 0) {
                cout << "Erro: Não é possível dividir por zero!\n";
            } else {
                cout << "Resultado = " << numero1 / numero2 << endl;
            }
        }
    }


    if (opcao == 3) {
        cout << "Digite um numero para saber se é par ou ímpar: ";
        cin >> numero;
        if (numero % 2 == 0) {
            cout << "O numero é PAR.\n";
        } else {
            cout << "O numero é ÍMPAR.\n";
        }
    }

    return 0;
}
