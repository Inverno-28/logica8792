#include <stdio.h>
#include<locale.h>

int main(){

    int a,b;

    printf("digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if(a != b){
        printf("os numeros sao diferentes: \n");
    }else{
        printf("os numeros sao iguais: \n");
    }

    return 0;
}
