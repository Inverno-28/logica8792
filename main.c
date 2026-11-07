#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void contar(int n){
    for (int i = 0; i < n; i++){
        printf("%d\n", i+1);    
    }
    
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

contar(5);

return 0;

}
