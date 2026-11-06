#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int fatorial(int numero){
    if(numero == 0 || numero == 1){
        return 1;
    }
    return numero * fatorial(numero - 1);
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int resultado = fatorial(5);

    printf("fatorial: %d\n", resultado);

return 0;

}
