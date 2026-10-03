#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n, pos;

printf("digite o tamanho");
    scanf("%d", &n);


int v[n];

    for(int i = 0; i < n; i++){
        printf("Digite o Valor%d: ", i + 1);
            scanf("%d", &v[i]);
    }
    
    printf("digite a posição a remover (0 a %d): ", n - 1);
        scanf("%d", &pos);
    
    for (int i = pos; i < n-1; i++){
        v[1] = v[i+1];
    }
    
n--;
printf("vetor apos remoção: \n");
    for (int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
    
printf("\n");


return 0; 

}
