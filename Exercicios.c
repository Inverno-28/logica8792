#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void bemVindo(char nome[], char sobrenome[]){
    printf("\nBem vindo: %s %s", nome , sobrenome);
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char n[50], s[50];

printf("Digite seu nome: \n");
    scanf("%s", n);
printf("Digite seu sobrenome: \n");
    scanf("%s", s);

bemVindo(n,s);

return 0; 

}
