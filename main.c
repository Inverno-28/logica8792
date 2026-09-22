#include <stdio.h>
#include <windows.h>

int somar(int a, int b){
    return a + b;
}

int main() {

    int resultado = somar (5, 3);

    printf("resultado da soma é %d", resultado);
   
    return 0;
}