#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int p;
int s = 0;
int o;

do{
    printf("\n--- Bem Vindo ---\n");
    printf("Escolha uma opção\n");
    printf("1 - Digite a Placa\n");
    printf("2 - Consulte a placa\n");
    printf("0 - Para Sair\n");
        scanf("%d", &o);

   switch (o){
    case 1:
    if (s == 0){
    printf("Digite a placa: \n");
        scanf("%d", &p);
        s = 1;
    }else{
        printf("Placa ja cadastrada\n");
    }
        break;
    
    case 2:
    if (s == 0){
        printf("Placa não foi cadastrada: \n");
    }else{
        printf("Placa %d\n", p);
    }
        break;

    default:
        printf("Opção Invalida\n");
        break;
    }

} while (o != 0);


return 0; 

}
