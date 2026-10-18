#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Topico {
    string local;
    string nome;
    string memoria;
};

int main() {
    vector<Topico> palacio;
    string caminhoAtual = "Raiz";
    int opcao;

    // --- CARREGAMENTO AUTOMÁTICO DO FICHEIRO ---
    ifstream arquivoLeitura("palacio_memoria.txt");
    if (arquivoLeitura.is_open()) {
        string loc, nom, mem;
        while (getline(arquivoLeitura, loc)) {
            if (!loc.empty() && getline(arquivoLeitura, nom) && getline(arquivoLeitura, mem)) {
                Topico t;
                t.local = loc;
                t.nome = nom;
                t.memoria = mem;
                palacio.push_back(t);
            }
        }
        arquivoLeitura.close();
    }

    // --- MENU PRINCIPAL ---
    do {
        cout << "\nLugar atual: " << caminhoAtual << "\n";

        // --- LOGICA AUTOMÁTICA QUE PEDISTE ---
        // 1. Verificar se existem subtopicos na pasta onde estamos agora
        int subtopicosNoNivel = 0;
        for (size_t i = 0; i < palacio.size(); i++) {
            if (palacio[i].local == caminhoAtual) {
                subtopicosNoNivel++;
            }
        }

        // 2. Se nao existirem subtopicos, ele pergunta AUTOMATICAMENTE assim que entras
        if (subtopicosNoNivel == 0) {
            char resposta;
            cout << "Esta pasta esta vazia. Queres criar um subtopico aqui dentro? (s/n): ";
            cin >> resposta;
            cin.ignore();

            if (resposta == 's' || resposta == 'S') {
                Topico novo;
                novo.local = caminhoAtual;

                cout << "Nome do subtopico: ";
                getline(cin, novo.nome);

                cout << "Memoria (podes deixar em branco): ";
                getline(cin, novo.memoria);
                if (novo.memoria.empty()) {
                    novo.memoria = "vazio";
                }

                palacio.push_back(novo);

                // Gravação Automática na pen drive
                ofstream arquivoEscrita("palacio_memoria.txt");
                if (arquivoEscrita.is_open()) {
                    for (size_t i = 0; i < palacio.size(); i++) {
                        arquivoEscrita << palacio[i].local << "\n" << palacio[i].nome << "\n" << palacio[i].memoria << "\n";
                    }
                    arquivoEscrita.close();
                }

                // AJUSTE QUE PEDISTE: Entra IMEDIATAMENTE no subtopico criado
                caminhoAtual = caminhoAtual + " > " + novo.nome;
                continue; // Reinicia o ciclo já dentro da nova pasta para fazer a pergunta outra vez
            }
        }

        // --- MENU CASO A PASTA JÁ TENHA CONTEÚDO ---
        cout << "1. Criar nova memoria \n";
        cout << "2. Entrar num subtopico existente\n";
        cout << "3. Voltar para o nivel anterior\n";
        cout << "4. Editar uma memoria deste nivel\n";
        cout << "5. Apagar um topico deste nivel\n";
        cout << "6. Procurar por Palavra-chave\n";
        cout << "7. Sair do programa\n";
        cout << "Opcao: ";
        cin >> opcao;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalido\n";
            continue;
        }
        cin.ignore();

        switch (opcao) {
            case 1: { // CRIAR MANUALMENTE
                Topico novo;
                novo.local = caminhoAtual;

                cout << "Nome: ";
                getline(cin, novo.nome);

                cout << "Memoria: ";
                getline(cin, novo.memoria);
                if (novo.memoria.empty()) {
                    novo.memoria = "vazio";
                }

                palacio.push_back(novo);

                ofstream arquivoEscrita("palacio_memoria.txt");
                if (arquivoEscrita.is_open()) {
                    for (size_t i = 0; i < palacio.size(); i++) {
                        arquivoEscrita << palacio[i].local << "\n" << palacio[i].nome << "\n" << palacio[i].memoria << "\n";
                    }
                    arquivoEscrita.close();
                }
                cout << "-> Guardado!\n";
                break;
            }
            case 2: { // ENTRAR NUM SUBTÓPICO EXISTENTE
                int contador = 0;
                vector<size_t> indicesAtuais;

                for (size_t i = 0; i < palacio.size(); i++) {
                    if (palacio[i].local == caminhoAtual) {
                        contador++;
                        indicesAtuais.push_back(i);
                        cout << contador << ". " << palacio[i].nome;
                        if (palacio[i].memoria != "vazio") {
                            cout << " (Memoria: " << palacio[i].memoria << ")";
                        }
                        cout << "\n";
                    }
                }

                int escolha;
                cout << "Escolha o numero para entrar (0 para cancelar): ";
                cin >> escolha;
                cin.ignore();

                if (escolha > 0 && escolha <= contador) {
                    size_t idxVerdadeiro = indicesAtuais[escolha - 1];
                    // Entra na pasta
                    caminhoAtual = caminhoAtual + " > " + palacio[idxVerdadeiro].nome;
                }
                break;
            }
            case 3: { // VOLTAR ATRÁS
                if (caminhoAtual == "Raiz") {
                    cout << "Ja estas na raiz\n";
                } else {
                    size_t posicao = caminhoAtual.rfind(" > ");
                    if (posicao != string::npos) {
                        caminhoAtual = caminhoAtual.substr(0, posicao);
                    } else {
                        caminhoAtual = "Raiz";
                    }
                }
                break;
            }
            case 4: { // EDITAR
                int contador = 0;
                vector<size_t> indicesAtuais;

                for (size_t i = 0; i < palacio.size(); i++) {
                    if (palacio[i].local == caminhoAtual) {
                        contador++;
                        indicesAtuais.push_back(i);
                        cout << contador << ". " << palacio[i].nome << " [" << palacio[i].memoria << "]\n";
                    }
                }

                int escolha;
                cout << "Numero para editar: ";
                cin >> escolha;
                cin.ignore();

                if (escolha > 0 && escolha <= contador) {
                    size_t idxVerdadeiro = indicesAtuais[escolha - 1];
                    cout << "Nova memoria para " << palacio[idxVerdadeiro].nome << ": ";
                    getline(cin, palacio[idxVerdadeiro].memoria);

                    if (palacio[idxVerdadeiro].memoria.empty()) {
                        palacio[idxVerdadeiro].memoria = "vazio";
                    }

                    ofstream arquivoEscrita("palacio_memoria.txt");
                    if (arquivoEscrita.is_open()) {
                        for (size_t i = 0; i < palacio.size(); i++) {
                            arquivoEscrita << palacio[i].local << "\n" << palacio[i].nome << "\n" << palacio[i].memoria << "\n";
                        }
                        arquivoEscrita.close();
                    }
                    cout << "-> Alterado!\n";
                }
                break;
            }
            case 5: { // APAGAR
                int contador = 0;
                vector<size_t> indicesAtuais;

                for (size_t i = 0; i < palacio.size(); i++) {
                    if (palacio[i].local == caminhoAtual) {
                        contador++;
                        indicesAtuais.push_back(i);
                        cout << contador << ". " << palacio[i].nome << "\n";
                    }
                }

                int escolha;
                cout << "Numero para apagar: ";
                cin >> escolha;
                cin.ignore();

                if (escolha > 0 && escolha <= contador) {
                    size_t idxVerdadeiro = indicesAtuais[escolha - 1];
                    palacio.erase(palacio.begin() + idxVerdadeiro);

                    ofstream arquivoEscrita("palacio_memoria.txt");
                    if (arquivoEscrita.is_open()) {
                        for (size_t i = 0; i < palacio.size(); i++) {
                            arquivoEscrita << palacio[i].local << "\n" << palacio[i].nome << "\n" << palacio[i].memoria << "\n";
                        }
                        arquivoEscrita.close();
                    }
                    cout << "-> Apagado!\n";
                }
                break;
            }
            case 6: { // PROCURAR
                string busca;
                cout << "Procurar por: ";
                getline(cin, busca);

                bool achou = false;
                cout << "\n--- RESULTADOS ---\n";
                for (size_t i = 0; i < palacio.size(); i++) {
                    if (palacio[i].nome.find(busca) != string::npos || palacio[i].memoria.find(busca) != string::npos) {
                        cout << "Caminho: " << palacio[i].local << " > " << palacio[i].nome << "\n";
                        if (palacio[i].memoria != "vazio") {
                            cout << "Memoria: " << palacio[i].memoria << "\n";
                        }
                        cout << "-------------------\n";
                        achou = true;
                    }
                }
                if (!achou) {
                    cout << "Nao encontrado.\n";
                }
                break;
            }
            case 7:
                break;

            default:
                cout << "Invalido\n";
                break;
        }

    } while (opcao != 7);

    return 0;
}

