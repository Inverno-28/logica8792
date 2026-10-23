#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao;

do{
    printf("\n--- MENU ---\n");
    printf("1 - Dizer Ola\n");
    printf("2 - Dizer Tchau\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    if (opcao == 1){

        printf("Ola\n");

    }else if (opcao == 2){

        printf("tchau\n");

    }else if (opcao != 0){
    
    printf("Opação Invalida\n");
    }

}while(opcao != 0);

printf("ate mais\n");
    
return 0; 

}
