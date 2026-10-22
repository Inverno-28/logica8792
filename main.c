#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;
do{
    printf("Digite um numero (não negativo): ");
    scanf("%d", &n);
}while(n < 0);

printf("Voce digitou: %d\n", n);

return 0; 

}
