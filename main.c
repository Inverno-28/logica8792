#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int fatorial (int n){
    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i; //resultado = resultado * i;
    }
    return resultado;
}

int main() {

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero = 5;
printf ("%d = %d", numero, fatorial(numero));

    return 0;
}