#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int a[2][2], b[2][2], soma[2][2];
    printf("Matriz A:\n");

for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
        printf("A[%d][%d]: ", i,j);
        scanf("%d", &a[i][j]);
    }
}

printf("Matriz B: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        
    }
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            soma[i][j] = a[i][j] + b[i][j];

        }
    }

    printf("\nA + B: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", soma[i][j]);
        }
    printf("\n");
    }
    

return 0; 

}
