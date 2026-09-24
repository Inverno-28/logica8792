#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

void linha(int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("*");
    }
    printf("\n");
}

int main(){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

linha(20000);

    return 0;
}