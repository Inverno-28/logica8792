#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){
SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("num1: ");
scanf("%d", &n);

if (n % 2 == 0){
    printf("numero par: ");
}else{
    printf("numero impar: ");
}



    return 0;
}