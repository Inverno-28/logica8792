#include <stdio.h>
#include<locale.h>

int main(){

    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

if (n>0){
    printf("positivo\n");
}else{
    printf("negativo\n");
}


    return 0;
}