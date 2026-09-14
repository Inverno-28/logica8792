#include <stdio.h>
#include<locale.h>

int main(){

    int a,b,c,d,e,maior;

    printf("digite cinco numeros: ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

maior = a;

if(b > maior) maior = b;
if(c > maior) maior = c;
if(d > maior) maior = d;
if(e > maior) maior = e;

printf("maior: %d", maior);

    return 0;
}
