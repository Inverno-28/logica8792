#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int resposta;
do{
    printf("executando o programa..\n");
    printf("deseja continuar (1 - sim / 0 - não): ");
    scanf("%d", &resposta);
}while(resposta == 1);
printf("programa encerrado\n");

return 0; 

}
