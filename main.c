
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int s = 352;
int n;

    printf("\nAdivinhe o numero: \n");
    scanf("%d", &n);

while (n != s){

    if (n < s){
        printf("\nNumero Menor!!\n");
    }else {
        printf("\nNumero Maior!!\n");
    }

    printf("\nTente Novamente: \n");
    scanf("%d", &n);
}

printf("\nVocê acertou\n");

return 0; 
}
