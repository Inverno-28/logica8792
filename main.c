#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int i = 1;

while (i <= 5){
    printf("%d\n", i);
    i++;
}

    return 0;
}