#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero;
int sucesso;

do{
    printf("digite um numero maior que 0: ");
sucesso = scanf("%d", &numero);

if(sucesso != 1){
    printf("entrada invalida! apenas interios");
    while(getchar() != '\n');
    numero = 0;
} 
}while (numero <= 0);

printf("vc digitou %d, valido", numero);

return 0; 

}
