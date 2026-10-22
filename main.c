#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float nota;
do{
    printf("Digite uma nota (0 a 10): ");
    scanf("%f", &nota);
}while(nota < 0 || nota > 10);
    printf("nota valida: %.1f\n", nota);

return 0; 

}
