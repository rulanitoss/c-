#include <iostream>
#include <string.h>

using namespace std;

    bool jogada_valida = false;

    int jogada=0;

char grelha[9] = { '0', '1' , '2', '3', '4', '5', '6', '7', '8'};

    string p1 = "1", p2 = "2", p3 = "3";
    string p4 = "4", p5 = "5", p6 = "6";
    string p7 = "7", p8 = "8", p9 = "9";
    string npeca = "X";
    string verificacion;

void mostrar_grelha () {
    cout << grelha[0]<<"|"<< grelha[1]<<"|"<<grelha[2]<<"|\n";
    cout << grelha[3]<<"|"<< grelha[4]<<"|"<<grelha[5]<<"|\n";
    cout << grelha[6]<<"|"<< grelha[7]<<"|"<<grelha[8]<<"|\n";

}



bool ganhou  () {
    bool ganhou=false;

     if (p1 == npeca && p2 == npeca && p3 == npeca) {ganhou=true;}
     if (p4 == npeca && p5 == npeca && p6 == npeca) {ganhou=true;}
     if (p7 == npeca && p8 == npeca && p9 == npeca) {ganhou=true;}
     if (p1 == npeca && p4 == npeca && p7 == npeca) {ganhou=true;}
     if (p2 == npeca && p5 == npeca && p8 == npeca) {ganhou=true;}
     if (p3 == npeca && p6 == npeca && p9 == npeca) {ganhou=true;}
     if (p1 == npeca && p5 == npeca && p9 == npeca) {ganhou=true;}
     if (p3 == npeca && p5 == npeca && p7 == npeca) {ganhou=true;}





return ganhou;
}
void peca1(){cout << "X";}
void peca2(){cout << "X";}
void peca3(){cout << "X";}
void peca4(){cout << "X";}
void peca5(){cout << "X";}
void peca6(){cout << "X";}
void peca7(){cout << "X";}
void peca8(){cout << "X";}
void peca9(){cout << "X";}




bool jogo_terminol() {
    bool jogo_terminol=false;
    if (ganhou()) {
        jogo_terminol=true;
    }
    else if (!ganhou()) {
        jogo_terminol=true;
    }
return jogo_terminol;
}



int main () {

    bool jogo_terminol = false ;

    string p1 = "1", p2 = "2", p3 = "3";
    string p4 = "4", p5 = "5", p6 = "6";
    string p7 = "7", p8 = "8", p9 = "9";
    string npeca = "X";

    int opcao;
    mostrar_grelha ();
    cout << "onde voce quer jogar";
    cin >> opcao;
    bool aceita_jogada = false;

    switch(opcao){


            case 0:
                if (p1 == "1"){
                    p1 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 1:
                if (p2 == "2"){
                    p2 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 2:
                if (p3 == "3"){
                    p3 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 3:
                if (p4 == "4"){
                    p4 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 4:
                if (p5 == "5"){
                    p5 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 5:
                if (p6 == "6"){
                    p6 = npeca;
                    aceita_jogada = true;
                }
                break;
            case 6:
                if (p7 == "7"){
                    p7 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 7:
                if (p8 == "8"){
                    p8 = npeca;
                    aceita_jogada = true;
                }
                break;


            case 8:
                if (p9 == "9"){
                    p9 = npeca;
                    aceita_jogada = true;
                }
                break;






            default:
                cout << "\burrinho da silva... 1 a 9 apenas \n";
                break;









    }
            if (aceita_jogada){
            if(npeca == "x"){
                npeca = "O";
            } else{
                npeca = "x";


            }
        } else{
            cout << "\nPosicao ja preenchida \n";
        }
        if(p1==p2 && p2==p3){
            jogo_terminol = true;


        } else if(p4==p5 && p4==p6){
            jogo_terminol = true;


        } else if(p7==p8 && p8==p9){
            jogo_terminol = true;


        }


        if (p1!="1" && p2!="2" && p3!="3" && p4!="4" && p5!="5" && p6!="6" && p7!="7" &&p8!="8" && p9!="9"){
            jogo_terminol = true;
        }


return 0;
}
