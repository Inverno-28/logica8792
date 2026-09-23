#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

// void tabuada(int n){
//     printf("tabuada do %d\n", n);
//     for(int i = 1; i <= 10; i++){
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
// }

int tabuada(int n){
    int resultado;
    printf("tabuada do %d:\n", n);
    for (int i = 1; i <= 10; i++){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    
    return resultado;

}

int main() {
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero;
    printf("digite um numero para ver a tabuada: ");
    scanf("%d",&numero);
    tabuada(numero);

    return 0;
}