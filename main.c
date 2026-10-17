#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;
int soma;

printf("Ate quais taboadas vc que: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("\n");
        
        for(int j = 0; j <= 10; j++){
            soma = i * j;
            if (soma != 0){
                printf("\n%d * %d = %d", i, j, soma);
            
        }
    }
}

return 0; 

}
