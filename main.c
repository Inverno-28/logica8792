#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao;

printf("--- SISTEMA DE PEDAGIO ---\n");
printf("1 - moto\n");
printf("2 - carro passeio\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("categotia: Moto | tarida R$ 5,00\n");
    break;
case 2:
    printf("Categoria: carro passeio | tarifa R$ 10,00\n");
    break;
default:
    printf("erro opcao invalida");
    break;
}

//quero dormirrrrrrrrrr
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzz

    return 0;
}
