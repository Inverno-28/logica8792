#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numeros[] = {10, 20, 30};
int lenght = sizeof(numeros) / sizeof(numeros[0]);

printf("%d", lenght);

return 0;
}