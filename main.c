
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }

    if (soma == n){
        printf("%d é um numero perfeito\n", n);
    }else{
        printf("%d não é um numero perfeito\n", n);
    }
    

return 0; 

}
