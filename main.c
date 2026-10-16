#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

struct pessoa{
    char nome[50];
    int idade;
    float altura;
    float peso;
};

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

printf("--- Bem-Vindo a academia Gym Tech ---");
printf("\n");

struct pessoa p1;
    printf("Digete o nome: ");
        scanf("%s", p1.nome);
    printf("Digite sua idade: ");
        scanf("%d", &p1.idade);
    printf("Digite a altura: ");
        scanf("%f", &p1.altura);
    printf("Digite o peso: ");
        scanf("%f", &p1.peso);
    
    printf("--- Dados Do Cadastro ---\n");
        printf("nome: %s\nidade: %d\naltura: %.2f\npeso: %.2f", p1.nome, p1.idade, p1.altura, p1.peso);


return 0; 

}
