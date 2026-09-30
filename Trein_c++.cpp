#include <iostream>
#include <limits> // Adicionado para podermos limpar o buffer do teclado

using namespace std;    //para escrever cout em vez de std::cout

int main () {
    const int PIN_CORRETO = 1234;
    float saldo = 500.00;       //saldo inicial
    int pin_introduzido;
    int opcao;
    float valor;

    cout << "Bem vindo ao banco do Ruan\n";
    cout << "Introduza o seu pin de 4 digitos: ";
    cin >> pin_introduzido;

    // Se o utilizador digitar letras no PIN, limpa o erro
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (pin_introduzido != PIN_CORRETO) {
        cout << "Acesso negado\n";
        return 0;
    }

    cout << "Acesso concedido\n";

    do {
        cout << "\nMenu do banco do Ruan\n";
        cout << " 1 - Consultar saldo\n";
        cout << " 2 - Levantar dinheiro\n";
        cout << " 3 - Depositar dinheiro\n";
        cout << " 4 - sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // Se o utilizador digitar letras no menu, limpa o erro e força a opção inválida
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcao = 0;
        }

        switch(opcao) {

            case 1:
                cout << "O seu saldo atual e: " << saldo << "$\n";
                break;

            case 2: // LEVANTAR DINHEIRO (Diminui o saldo)
                cout << "Digite o valor para levantar: ";
                cin >> valor;

                // Se digitar letras no valor do levantamento
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    valor = 0; // Define como 0 para cair no "Valor invalido"
                }

                if (valor <= 0) {
                    cout << "Valor invalido para o levantamento\n";
                } else if (valor > saldo) {
                    cout << "Saldo insuficiente. Operacao cancelada\n";
                } else {
                    saldo -= valor; // Subtrai do saldo
                    cout << "Levantamento concluido! Retire seu dinheiro. Novo saldo: " << saldo << "$\n";
                }
                break;

            case 3: // DEPOSITAR DINHEIRO (Aumenta o saldo)
                cout << "Digite o valor a depositar: ";
                cin >> valor;

                // Se digitar letras no valor do depósito
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    valor = 0; // Define como 0 para cair no "Valor invalido"
                }

                if (valor > 0) {
                    saldo += valor; // Soma ao saldo
                    cout << "Deposito realizado! Novo saldo : " << saldo << "$\n";
                } else {
                    cout << "Valor invalido para deposito\n";
                }
                break;

            case 4:
                cout << "Obrigado por utilizar o meu BANCO. Tchau!\n";
                break;

            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}


