#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

const int lancamentos = 10;
int dados[lancamentos];
int soma = 0;
int seis = 0;

srand(time(NULL));

for (int i = 0; i < lancamentos; i++){
    dados[i] = rand() % 6 + 1;
    soma += dados[i];
    
    if(dados[i] == 6){
        seis++;
    }
    
}

printf("resultados dos lançamentos:\n");
    for (int i = 0; i < lancamentos; i++){
        printf("lançamentos %d: %d\n", i + 1, dados[i]);
    }
    printf("\nsoma: %d\n", soma);
    printf("quantidades de vzs que saiu 6: %d\n", seis);

return 0; 

}
