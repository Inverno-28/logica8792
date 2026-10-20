#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int senha = 1234;
int tentativas;

printf("Digite a senha: ");
scanf("%d", &tentativas);
while(tentativas != senha){
    printf("senha incorreta tente novamente: ");
    scanf("%d", &tentativas);
}

printf("Acesso liberado\n");

return 0; 

}
