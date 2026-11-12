#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

for (int i = 1; i <= 1000; i++){
    if(i % 7 == 0 && i % 2 != 0){
    printf("%d\n", i);
    }
}


return 0;

}
