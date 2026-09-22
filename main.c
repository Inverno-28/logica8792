#include <stdio.h>
#include <windows.h>

int somar(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if(b <= 0){
        printf("ele precisa ser maior que 0");
    }else{
    return a + b;
    }
  
}

// void soma (){
//     int num1, num2;
//     printf("digite um valor para num1");
//     scanf("%d", &num1);
//     printf("digite um valor para num2");
//     scanf("%d", &num2);
//     int resultado1 = num1 + num2;
//     printf ("resultado com void é %d\n", resultado1);
// }

int main() {

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int r = somar(5,3);
int r1 = subtract(10,2);
int r2 = multiplicar(4,2);
int r3 = dividir(16,2);
printf("resultado soma %d\n ", r);
printf("resultado subtração %d\n ", r1);
printf("resultado multiplicação %d\n ", r2);
printf("resultado divisão %d\n ", r3);
    return 0;
}