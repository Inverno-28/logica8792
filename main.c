#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero, pares = 0;

    printf("Digite numeros para soma, zero para: ");
        scanf("%d", &numero);
while(numero != 0){
    if(numero % 2 == 0){
    pares++;
    }

     printf("Digite numeros para soma, zero para: ");
        scanf("%d", &numero);

}

printf("quantidade de pares %d", pares);

return 0; 

}
