
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int v = 1000;
int o = -1;
int s;
int d;

while (o != 0){
  printf("Escolha Uma Opção: \n");
    printf("Consultar saldo: 1\n");
    printf("Sacar: 2\n");
    printf("Depositar: 3\n");
    printf("sair: 0\n");
    scanf("%d", &o);

    switch(o){
    case 1: printf("%d\n", v); break;

    case 2: printf("quanto você deseja sacar?\n");
                scanf("%d", &s);
            v -= s;
            break;

    case 3: printf("quanto você deseja depositar?\n");
                scanf("%d", &d);
            v += d;
            break;


    case 0: printf("saindo..\n");
        break;

    default: printf("opção invalida\n"); break;
    }
}
    return 0;

}

