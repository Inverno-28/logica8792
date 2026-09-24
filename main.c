#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n, soma = 0;

printf("digite um numero: ");
scanf("%d",&n);

for (int i = 1; i <= n; i++){
   soma += i;
   //soma = soma + i
}

printf("%d", soma);

    return 0;
}