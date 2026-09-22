#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numeros[3];

numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;

printf("%d", numeros[2]);

}