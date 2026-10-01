
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int matriz[3][3] = {
    {1,2,3},
    {4,5,6,},
    {7,8,9},
};


for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
            printf("\nelementos da matriz: %d,\n", matriz[i][j]);
            printf("grade da matriz: %d,%d\n", i,j);
    }

}



return 0; 
}
