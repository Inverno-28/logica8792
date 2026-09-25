#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n,s,resultado;

printf("digite um numero: ");
    resultado = scanf("%d", &n);

if(resultado != 1){
    printf("entrada invalida! Por Favor, digite apenas numeros!");
    return 1;
}

    for (int i = 1; i <=10; i++){
        s = i * n;
        printf("\n%d x %d = %d",i, n, s);
    }
    

    return 0;
}