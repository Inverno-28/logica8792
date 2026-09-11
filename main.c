#include <stdio.h>
<<<<<<< HEAD
#include<locale.h>

int main(){

setlocale (LC_ALL, "pt_BR.UTF-8");

float valor, cotação;

printf("digite o valor em reais: ");
scanf("%f",&valor);

printf("digite o valor em dolar: ");
scanf("%f", &cotação);

printf("valor em dolares: %2f\n", valor / cotação);

    return 0;
}
=======
#include <windows.h>

int main(){

    
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);
    
    return 0;
}
>>>>>>> b020ed07432c8d21051160e35812ccef11e73369
