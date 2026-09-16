#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int dia;

printf("digite um numero de (1a7):");
scanf("%d", &dia);

switch(dia){
    case 1:
        printf("domingo");
        break;
    case 2:
        printf("segunda");
        break;
    case 3:
        printf("terça");
        break;
    case 4:
        printf("quarta");
        break;
    case 5:
        printf("quinta");
        break;
    case 6:
        printf("sexta");
        break;
    case 7:
        printf("sabado");
        break;
    default:
        printf("numero invalido");
}



    return 0;
}
