#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a;
    int b;

    printf("digite a: ");
        scanf ("%d",&a);
  
    printf("digite a: ");
        scanf ("%d",&b);

    printf("A soma dos numero é: %d\n", (a + b));

    printf("A subtrção dos numero é: %d\n", (a - b));
    
    printf("A multiplicação dos numeros é: %d\n", (a * b));

    printf("A divisão dos numeros é: %.2f\n", (float)a / b);
    
    return 0;
}