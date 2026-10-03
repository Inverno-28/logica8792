#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("digite o tamanho");
    scanf("%d", &n);


int v[n];

    for(int i = 0; i < n; i++){
        printf("Digite o Valor%d: ", i + 1);
            scanf("%d", &v[i]);
        if (v[i] < 0){
            v[i] = 0;
        }
    }
    printf("Vetor ajustado: \n");
        for (int i = 0; i < n; i++){
            printf("%d", v[i]);
        }
printf("\n");

return 0; 

}
