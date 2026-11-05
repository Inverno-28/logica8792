#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int buscar(float vetor[], int tamanho, float chave){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == chave){
            return i;
        }
        
    }
    return -1;
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float numero[] = {10.5, 20.5, 30.5, 40.5, 50.5};
int tamanho = 5;
float procurando;

printf("Digite o numero que deseja procurar: ");
    scanf("%f", &procurando);

int resultado = buscar(numero, tamanho, procurando);

if (resultado != -1){
    printf("Numero encontrado\n");
    printf("Valor: %.2f\n", numero[resultado]);
    printf("Posição no vetor: %d\n", resultado);
}else{
    printf("numero não encontrado\n");
}


return 0; 

}
