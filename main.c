#include <stdio.h>
#include <windows.h>

int somar(int a, int b){
    return a + b;
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

int resultado = somar(5,3);
printf("o resultado da soma é %d", resultado);

    return 0;
}