#include <iostream>
#include <string>

using namespace std;

int main () {
    int opcao;
    int quantidade1 = 0;
    double valor1 = 0;
    double valor2 = 0;
    double valor3 = 0;
    int quantidade2 = 0;
    int quantidade3 = 0;
    int quantidade4 = 0;
    double valor = 0;
    double total_compra;
    double total_paes;
    int escolha_do_utilizador = 0;
    string total_pedido;
    int escolha_do_utilizador1 = 0;
    int escolha_do_utilizador2 = 0;
    int escolha_do_utilizador3 = 0;
    int escolha_do_utilizador4 = 0;

    cout<<"Bem-vindo a padaria do Ruan\n";
    do
    {
        cout<<"        \n1 - Bebidas\n";
        cout<<"        \n2 - Paes e salgados\n";
        cout<<"        \n3 - Doces e pastelaria\n";
        cout<<"        \n0 - Finalizar compra\n";
        cin >>opcao;

        if (opcao < 0 || opcao > 3)
        {
            cout << "\npara de ser burro e escolhe um numero valido\n";
            opcao = 0;
            break;
        }

        switch (opcao)
        {
            case 1:
                cout <<"Opcoes de bebidas\n";
                cout <<"1 - Cafe 1.00€\n"<<"2 - Galao 2.20€\n"<<"3 - sumos\n"<<endl;
                cout <<"Escolha o numero do que voce quer beber:\n " ;
                cin>>escolha_do_utilizador;

                if (escolha_do_utilizador < 1 || escolha_do_utilizador > 3)
                {
                    cout << "\npara de ser burro e escolhe um numero valido\n";
                    opcao = 0;
                    break;
                }

                if (escolha_do_utilizador == 3)
                {
                    cout<<"\n1 - sumo de morango 3.00€\n"<<"\n2 - sumo de maracuja 5.00€\n"<<"\n3 - sumo de ananas 4.50€\n"<<"\n4 - sumo de uva 4.00€\n"<<endl;
                    cout<<"Escolha o numero do sumo: ";
                    cin>>escolha_do_utilizador1;

                    if (escolha_do_utilizador1 < 1 || escolha_do_utilizador1 > 4)
                    {
                        cout << "\npara de ser burro e escolhe um numero valido\n";
                        opcao = 0;
                        break;
                    }
                }
                cout << "Quantos deseja? ";
                cin >> quantidade1;

                if (escolha_do_utilizador == 1) total_pedido = total_pedido + "Cafe | ";
                if (escolha_do_utilizador == 2) total_pedido = total_pedido + "Galao | ";
                if (escolha_do_utilizador == 3) {
                    if (escolha_do_utilizador1 == 1) total_pedido = total_pedido + "sumo de morango | ";
                    if (escolha_do_utilizador1 == 2) total_pedido = total_pedido + "sumo de maracuja | ";
                    if (escolha_do_utilizador1 == 3) total_pedido = total_pedido + "sumo de ananas | ";
                    if (escolha_do_utilizador1 == 4) total_pedido = total_pedido + "sumo de uva | ";
                }
                cout <<total_pedido << " adcionado ao carrinho"<<endl;
                break;
            case 2:
                cout<<"Opcoes de paes e salgados\n";
                cout<<"1 - sopas\n"<<"2 - sandes \n"<<"3 - paes\n"<<endl;
                cout<<"Escolha o numero do que quer comer: " ;
                cin >>escolha_do_utilizador2;

                if (escolha_do_utilizador2 < 1 || escolha_do_utilizador2 > 3)
                {
                    cout << "\npara de ser burro e escolhe um numero valido\n";
                    opcao = 0;
                    break;
                }

                if (escolha_do_utilizador2 == 1)
                {
                    cout<<"\n1 - caldo_verde 2.79€\n"<<"\n2 - sopa_de_legumes 2.79€\n"<<"\n3 - creme_de_cenoura 2.79€\n"<<"\n4 - sopa_de_pedra 5.00€\n"<<"\n5 - canja_de_galinha 3.50€\n"<<endl;
                    cout<<"\nescolha o numero da sua sopa\n";
                    cin >>escolha_do_utilizador2;

                    if (escolha_do_utilizador2 < 1 || escolha_do_utilizador2 > 5)
                    {
                        cout << "\npara de ser burro e escolhe um numero valido\n";
                        opcao = 0;
                        break;
                    }

                    cout << "Quantas sopas deseja? ";
                    cin >> quantidade2;

                    if (escolha_do_utilizador2 == 1) total_pedido = total_pedido + "caldo_verde | ";
                    if (escolha_do_utilizador2 == 2) total_pedido = total_pedido + "sopa_de_legumes | ";
                    if (escolha_do_utilizador2 == 3) total_pedido = total_pedido + "creme_de_cenoura | ";
                    if (escolha_do_utilizador2 == 4) total_pedido = total_pedido + "sopa_de_pedra | ";
                    if (escolha_do_utilizador2 == 5) total_pedido = total_pedido + "canja_de_galinha | ";
                }
                else if (escolha_do_utilizador2 == 2)
                {
                    cout<<"\n1 - tosta_mista 3.50€\n"<<"\n2 - sandes_de_presunto 7.99€\n"<<"\n3 - preguinho 7.99€\n"<<"\n4 - sandes em pao de deus misto 3.99€\n"<<"\n5 - sandes de leitao 7.50€\n"<<endl;
                    cout<<"Escolha o numero do que quer comer: ";
                    cin>>escolha_do_utilizador2;

                    if (escolha_do_utilizador2 < 1 || escolha_do_utilizador2 > 5)
                    {
                        cout << "\npara de ser burro e escolhe um numero valido\n";
                        opcao = 0;
                        break;
                    }

                    cout << "Quantas sandes deseja? ";
                    cin >> quantidade2;

                    if (escolha_do_utilizador2 == 1) total_pedido = total_pedido + "tosta_mista | ";
                    if (escolha_do_utilizador2 == 2) total_pedido = total_pedido + "sandes_de_presunto | ";
                    if (escolha_do_utilizador2 == 3) total_pedido = total_pedido + "preguinho | ";
                    if (escolha_do_utilizador2 == 4) total_pedido = total_pedido + "sandes em pao de deus misto | ";
                    if (escolha_do_utilizador2 == 5) total_pedido = total_pedido + "sandes de leitao | ";
                }
                else if(escolha_do_utilizador2 == 3)
                {
                    cout<<"\n1 - papo_seco 0.20€ unidade\n"<<"\n2 - broa_de_milho 1.80€ unidade\n"<<"\n3 - pao_de_mafra 2.00€ unidade\n"<<endl;
                    cout<<"Escolha o numero do pao que quer comer: ";
                    cin >> escolha_do_utilizador3;

                    if (escolha_do_utilizador3 < 1 || escolha_do_utilizador3 > 3)
                    {
                        cout << "\npara de ser burro e escolhe um numero valido\n";
                        opcao = 0;
                        break;
                    }

                    cout<<"quantas unidades voce quer? ";
                    cin>>quantidade3;

                    if (escolha_do_utilizador3 == 1) total_pedido = total_pedido + "papo_seco | ";
                    if (escolha_do_utilizador3 == 2) total_pedido = total_pedido + "broa_de_milho | ";
                    if (escolha_do_utilizador3 == 3) total_pedido = total_pedido + "pao_de_mafra | ";
                }
                break;
            case 3:
                cout<<"Opcoes de Doces e pastelaria\n";
                cout<<"1 - pastel_de_nata 1.20€\n"<<"2 - croissant 2.00€ \n"<<"3 - bola_de_berlim 1.25€\n"<<endl;
                cout<<"Escolha o numero do que quer comer:" ;
                cin >>escolha_do_utilizador4;

                if (escolha_do_utilizador4 < 1 || escolha_do_utilizador4 > 3)
                {
                    cout << "\npara de ser burro e escolhe um numero valido\n";
                    opcao = 0;
                    break;
                }

                cout << "Quantos deseja? ";
                cin >> quantidade4;

                if (escolha_do_utilizador4 == 1) total_pedido = total_pedido + "pastel_de_nata | ";
                if (escolha_do_utilizador4 == 2) total_pedido = total_pedido + "croissant | ";
                if (escolha_do_utilizador4 == 3) total_pedido = total_pedido + "bola_de_berlim | ";
                break;
            case 0:
                if (escolha_do_utilizador == 1)
                {
                    valor1 = 1.00*quantidade1;
                }
                if (escolha_do_utilizador == 2)
                {
                    valor1 = 2.20*quantidade1;
                }
                if (escolha_do_utilizador1 == 1)
                {
                    valor1 = 3.00*quantidade1;
                }
                if (escolha_do_utilizador1 == 2)
                {
                    valor1 = 5.00*quantidade1;
                }
                if (escolha_do_utilizador1 == 3)
                {
                    valor1 = 4.50*quantidade1;
                }
                if (escolha_do_utilizador1 == 4)
                {
                    valor1 = 4.00*quantidade1;
                }
                if (escolha_do_utilizador2 == 1)
                {
                    valor2 = 2.79*quantidade2;
                }
                if (escolha_do_utilizador2 == 2)
                {
                    valor2 = 2.79*quantidade2;
                }
                if (escolha_do_utilizador2 == 3)
                {
                    valor2 = 2.79*quantidade2;
                }
                if (escolha_do_utilizador2 == 4)
                {
                    valor2 = 5.00*quantidade2;
                }
                if (escolha_do_utilizador2 == 5)
                {
                    valor2 = 3.50*quantidade2;
                }
                if (escolha_do_utilizador2 == 1)
                {valor2 = 3.50*quantidade2;
                }
                if (escolha_do_utilizador2 == 2)
                {
                valor2 = 7.99*quantidade2;
                }
                if (escolha_do_utilizador2 == 3)
                {
                valor2 = 7.99*quantidade2;
                }
                if (escolha_do_utilizador3 == 1)
                {
                valor3 =  0.20*quantidade3;
                }
                if (escolha_do_utilizador3 == 2)
                {
                valor3 =  1.80*quantidade3;
                }
                if (escolha_do_utilizador3 == 3)
                {
                valor3 = 2.00*quantidade3;
                }
                if (escolha_do_utilizador4 == 1)
                {
                valor3 = 1.20*quantidade4;
                }
                if (escolha_do_utilizador4 == 2)
                {
                valor3 = 2.00*quantidade4;
                }
                if (escolha_do_utilizador4 == 3)
                {
                valor3 = 1.25*quantidade4;
                }
                cout << "\n======= FATURA =======" << endl;
                cout << "Pedidos: " << total_pedido << endl;
                total_compra = valor1 + valor2 + valor3;
                cout << "Total: " << total_compra << "€" << endl;
                cout << "Volte sempre!" << endl;
                break;
                }
                }
                while(opcao!=0);
                return 0;
                }
