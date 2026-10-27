#include <iostream>
using namespace std;

int main() {
    float ganho_horario,horas_mensais,ganho_mensal,ganho_anual;
    cout <<" Quanto você ganha por hora ?: ";
    cin >>ganho_horario;
    cout <<"quanto horas voce trabalhou esse mes?: ";
    cin >>horas_mensais;
    ganho_mensal=ganho_horario*horas_mensais;
    ganho_anual=ganho_mensal*12;
    cout <<"Esse mes voce ganhou "<< ganho_mensal<<"€"<<endl;
    cout <<"Seu rendimento anual e aproximadamente" << ganho_anual<<"€"<<endl;


return 0;
}
