#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

// void somar(int a, int b){
//     printf("Soma = %d\n", a + b);
// }

int soma(int x, int y){
    return x + y;
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

// somar(5, 2);

int resultado = soma(8, 2);
    printf("O resultado é %d: ", resultado);

return 0; 

}
