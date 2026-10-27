#include <iostream>

using namespace std;

void menu () {
    cout <<"Diga a operação que quer fazer: \n";
    cout <<"1 - saber o ano\n";
    cout <<"2 - sair do programa\n";
}
int get_ano () {
    return 2026;
}

int main () {

    int opcao,ano;
    ano = get_year;

    while (opcao != 2) {
        menu();
        cin >> opcao;
        switch (opcao) {
            case 1:
                cout<<"estamos em " << get_ano ()<<endl;
                break;

            case 2:
                cout<<"Saindo do programa";
                break;


        }
    }




    return 0;
}
