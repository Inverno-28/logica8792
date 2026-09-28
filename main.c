
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);


for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        for (int k = 0; k < 10; k++){
            for (int l = 0; l < 10; l++){
                printf("\n%d%d%d%d",i,j,k,l);
            }
            printf("\n");
        }
       printf("\n"); 
    }
    printf("\n");
}




return 0; 
}
