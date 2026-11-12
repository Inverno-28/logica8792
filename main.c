#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

for (int i = 2000; i < 2030; i++){
    if (i % 4 == 0){
        printf("%d\n", i);
    }
    
}


return 0;

}
