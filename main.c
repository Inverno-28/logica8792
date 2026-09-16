#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int diaDaSemana;

printf("digite um numero de (1a7):");
scanf("%d", &diaDaSemana);

if(diaDaSemana==1){
    printf("domingo");}
    else if (diaDaSemana == 2){
    printf("segunda-feira");
}else if (diaDaSemana == 3){
    printf("terça-feira");
}else if (diaDaSemana == 4){
    printf("quarta-feira");
}else if (diaDaSemana == 5){
    printf("quinta-feira");
}else if (diaDaSemana == 6){
    printf("sexta-feira");
}else if (diaDaSemana == 7){
    printf("sabado");
}else {
    printf("valor invalido");
}


    return 0;
}
