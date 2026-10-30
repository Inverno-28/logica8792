#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void linha(int n){
    for(int i = 0; i < n; i++){
            printf("-");
        printf("\n");
    }
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

linha(30);
printf("Bem-Vindo ao sistema\n");
linha(30);

return 0; 

}
