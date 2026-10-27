#include <iostream>
using namespace std;


int main(){
    int posicao;
    string p1 = "1",p2 = "2",p3 = "3",p4 = "4",p5 = "5",p6 = "6",p7 = "7",p8 = "8",p9 = "9";
    string peca = "x";
    bool jogo_terminou = false, aceita_jogada;


    while(!jogo_terminou){


        cout << "\n" << p1 << "|" << p2 << "|" << p3;
        cout << "\n" << p4 << "|" << p5 << "|" << p6;
        cout << "\n" << p7 << "|" << p8 << "|" << p9;


        cout << "\ndiz onde queres jogar: ";
        cin >> posicao;




        switch(posicao){


            case 1:
                if (p1 == "1"){
                    p1 = peca;
                    aceita_jogada = true;
                }
                break;


            case 2:
                if (p2 == "2"){
                    p2 = peca;
                    aceita_jogada = true;
                }
                break;


            case 3:
                if (p3 == "3"){
                    p3 = peca;
                    aceita_jogada = true;
                }
                break;


            case 4:
                if (p4 == "4"){
                    p4 = peca;
                    aceita_jogada = true;
                }
                break;


            case 5:
                if (p5 == "5"){
                    p5 = peca;
                    aceita_jogada = true;
                }
                break;


            case 6:
                if (p6 == "6"){
                    p6 = peca;
                    aceita_jogada = true;
                }
                break;
            case 7:
                if (p7 == "7"){
                    p7 = peca;
                    aceita_jogada = true;
                }
                break;


            case 8:
                if (p8 == "8"){
                    p8 = peca;
                    aceita_jogada = true;
                }
                break;


            case 9:
                if (p9 == "9"){
                    p9 = peca;
                    aceita_jogada = true;
                }
                break;






            default:
                cout << "\burrinho da silva... 1 a 9 apenas \n";
                break;




        }
        if (aceita_jogada){
            if(peca == "x"){
                peca = "O";
            } else{
                peca = "x";


            }
        } else{
            cout << "\nPosicao ja preenchida \n";
        }
        if(p1==p2 && p2==p3){
            jogo_terminou = true;


        } else if(p4==p5 && p4==p6){
            jogo_terminou = true;


        } else if(p7==p8 && p8==p9){
            jogo_terminou = true;


        }


        if (p1!="1" && p2!="2" && p3!="3" && p4!="4" && p5!="5" && p6!="6" && p7!="7" &&p8!="8" && p9!="9"){
            jogo_terminou = true;
        }
    }
    return 0;
}
