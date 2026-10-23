#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao;

printf("Digite um numero: \n");
    scanf("%d", &opcao);

switch (opcao){
case 1:
    printf("Um");
    break;

case 2:
    printf("Dois");
    break;

case 3:
    printf("tres");
    break;

case 4:
    printf("quatro");
    break;

default:
    printf("Opção Invalida/Nao disponivel");
    break;
}

return 0; 

}
