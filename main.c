#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

struct pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

struct pessoa p1 = {"eduardo",39, 1.70};
struct pessoa p2 = {"clara",30, 1.65};
struct pessoa p3 = {"joana",40, 1.80};

printf("nome: %s | idade: %d | altura: %.2f\n", p1.nome, p1.idade, p1.altura);
printf("nome: %s | idade: %d | altura: %.2f\n", p2.nome, p2.idade, p2.altura);
printf("nome: %s | idade: %d | altura: %.2f\n", p3.nome, p3.idade, p3.altura);

return 0; 

}
