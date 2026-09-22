#include <stdio.h>
#include <windows.h>

void saudar(const char *nome) {
    printf("Ola %s\n", nome);
}

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char nome[100];

    printf("Digite seu nome: ");
    scanf("%99s", nome);

    saudar(nome);

    return 0;
}