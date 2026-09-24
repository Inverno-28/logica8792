#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int num1 = 1;

while(num1 <= 50 ){
    if(num1 % 2 == 0){
        printf("%d\n", num1);
    }
    num1++;
}

// for(int i = 0; i <= 50; i += 2){
//     printf("%d\n", i);
// }

    return 0;
}