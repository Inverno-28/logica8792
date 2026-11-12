#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int a = 0;

 for (int i = 1; i <= 100; i++){
    if (i % 5 == 0){
        printf("%d\n", i);
        a++;
    }
}

    printf("\n%d", a);

return 0;

}
