#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int ehPar(int n){
    return n % 2 == 0;
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int quantidade = 0;
int soma = 0;

printf("Pares de 1 a 20: ");

for (int i = 0; i <= 20; i++){
    if (ehPar){
        printf("%d ", i);
        quantidade++;
        soma += i;
    }
}
    printf("\nQuantidade: %d\n", quantidade);
    printf("soma: %d\n", soma);

return 0; 

}
