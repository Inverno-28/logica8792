#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float peso, altura, imc;

printf("digite seu peso (KG): ");
scanf("%f", &peso);

printf("digite sau altura (m): ");
scanf("%f", &altura);

imc = peso / (altura * altura);

if(imc<18.5){
    printf("seu peso é; %.2f\n", peso);
    printf("sua altura é; %.2f\n", altura);
    printf("classificação; abaixo do peso!\n");
}else if (imc<25){
    printf("seu peso é; %.2f\n", peso);
    printf("sua altura é; %.2f\n", altura);
    printf("peso normal");
}else if (imc<30){
    printf("seu peso é; %.2f\n", peso);
    printf("sua altura é; %.2f\n", altura);
    printf("sobre peso");
}else{
    printf("seu peso é; %.2f\n", peso);
    printf("sua altura é; %.2f\n", altura);
    printf("obseidade");
}

return 0;

}