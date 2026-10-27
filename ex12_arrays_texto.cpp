#include <iostream>
#include <string.h>

using namespace std;


int main () {
                 //Em C, um texto é um vetor de char que termina num carácter invisível, o '\0'. Por isso
                //reservem sempre uma posição a mais.


    char nome[31],primeiraLetra ='',segunda letra ='';                  // até 30 letras + o '\0'
    printf("Nome: ");

    cin.getline(nome, 31);
                                    // SEM & - o nome do vetor já é um endereço
    printf("Ola, %s !\n", nome);

    printf("\nOla, %s !\n", nome[0]);
    cout << "\nOla, " << nome[0] << "!\n";

    primeiraLetra = nome[0];
    for (int i=0; i<31;i++) {
        if (nome[i] == '') {
            segundaLetra = nome[i+1]
        }
    }
    cout <<"\n Letras: " <<primeiraLetra << SegundaLetra<<endl;







return 0;
}
