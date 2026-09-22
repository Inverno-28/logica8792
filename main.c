#include <stdio.h>
#include <windows.h>

void dobrar(int *x){
    *x = *x * 2;
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero = 10;
dobrar (&numero);
printf("numero depois da função: %d\n", numero);

return 0;

}