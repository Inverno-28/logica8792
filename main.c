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
    }
    int ordenado = 1;
        for (int i = 0; i < n; i++){
            if (v[i] > v[i +1 ]){
                ordenado = 0;
                break;
            };
        }

        if(ordenado){
            printf("crecente");
        }else{
            printf("decresente");
        }

return 0; 

}
