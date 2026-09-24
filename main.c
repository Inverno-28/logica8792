#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("adivinhe o numero de 1 a 30: ");
scanf("%d", &n);

while(n != 28){
    printf("errou: ");
    scanf("%d", &n);
}

printf("Acesso permitido!\n");


    return 0;
}