#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int num1;

printf("digite um numero positivo: ");
    scanf("%d", &num1);

    while(num1 <= 0){
    
        printf("Numero Invalálido! digite novamente: ");
            scanf("%d", &num1);
}

printf("Numero valido: %d\n", num1);

    return 0;
}