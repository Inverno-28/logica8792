#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;
long long fatorial = 1;

printf("digite o primeiro numero");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    fatorial *= i;
}

printf("fatorial: %lld\n", fatorial);

    return 0;
}