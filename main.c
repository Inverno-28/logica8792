#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

float lerPositivo(char mensagem[]){
    float valor;
do{
    printf("%s", mensagem);
        scanf("%f", &valor);
    if (valor <= 0){
        printf("Valor invalido Digite um numero maior que 0\n");
    }
} while (valor <= 0);
return valor;
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float idade = lerPositivo("digite a idade");
float peso = lerPositivo("digite o peso (kg)");
float altura = lerPositivo("digite altura (m)");

printf("\nidade: %.0f anos\n", idade);
printf("imc %f", peso/ (altura * altura));

return 0; 

}
