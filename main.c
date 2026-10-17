#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("Digite um valor: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        printf("%d", i);
    }
    

return 0; 

}
