#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void mostraVetor(int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
printf("\n");
}
    void inverterVetor(int v[], int n){
        for (int i = 0; i < n / 2; i++){
            int temp = v[i];
            v[i] = v[n - 1 -i];
            v[n - 1 - i] = temp;
        }
    }


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero[5] = {1,2,3,4,5};

printf("antes: ");
    mostraVetor(numero, 5);
    inverterVetor(numero, 5);

printf("Depois: ");
    mostraVetor(numero, 5);

return 0; 

}
