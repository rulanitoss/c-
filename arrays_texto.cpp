#include <iostream>
#include <string.h>

using namespace std;


int main () {
                 //Em C, um texto é um vetor de char que termina num carácter invisível, o '\0'. Por isso
                //reservem sempre uma posição a mais.


    char nome[31];                            // até 30 letras + o '\0'
    printf("Nome: ");
    scanf("%30s", nome);                    // SEM & - o nome do vetor já é um endereço
    printf("Ola, %s!\n", nome);





return 0;
}
