#include <stdio.h>
#include<locale.h>

int main(){

    int n;

    printf("digite um numero: ");
    scanf("%d",&n);

    printf("%s", n % 2 == 0 ? "\npar" : "\nimpar");

    return 0;
}
