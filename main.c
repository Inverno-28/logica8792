
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("tamanho do triangulo: ");
scanf("%d",&n);

for (int i = 1;  i <= n; i++){
    for(int j = 1; j <= i; j++){
        printf("* ");
    }
    printf("\n");
}


return 0; 
}
