#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);
  
int a[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("%d\n", a[i][j]);
    }
    
}


return 0; 

}
