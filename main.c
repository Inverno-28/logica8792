#include <stdio.h>
#include<locale.h>

int main(){

    int n;

    printf("digite um numero: ");
    scanf("%d",&n);

    printf("%s", n > 0 ? "positivo" : (n < 0 ? "negativo" : "zero"));

    return 0;
}