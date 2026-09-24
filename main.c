#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao = -1;

    while(opcao != 0){
    
        printf("\nMenu: \n");
        printf("1 - depositar\n");
        printf("2 - sacar\n");
        printf("3 - consultar\n");
        printf("0 - sairo\n");
        printf("Escolha: \n"); 
            scanf("%d", &opcao);

    switch (opcao){
        
            case 1: printf("Voce escolheu depositar\n");break;
            case 2: printf("Voce escolheu sacar\n");break;
            case 3: printf("Voce escolheu consultar\n");break;
            case 0: printf("Saindo\n");break;
        
        default: printf("Opção invalida\n");
        }

    }

    return 0;
}