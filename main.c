#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;
int soma, resultado;

printf("Digite um valor: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        soma += i;
        soma -+ 1; 
        printf("\n%d + %d = %d ", soma, i, soma + i);
    }
    

return 0; 

}
