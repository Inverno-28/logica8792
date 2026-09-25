#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero, contador = 0;

printf("digite numeros (0 para parar): \n");
scanf("%d", &numero);

while (numero != 0){
    contador++;
    scanf("%d", &numero);
}

printf("quantidade de numeros digitados: %d\n", contador);

return 0;

}