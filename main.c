
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

   int n, resto, invertido = 0;

   printf("digite um valor: ");
    scanf("%d", &n);

    while(n != 0){
        resto = n % 10; // 512 % 10 = 2
        invertido = invertido * 10 + resto;
        n /= 10; // (n + n)/10
    }
   
    printf("numero invertido: %d\n", invertido);

return 0; 

}
