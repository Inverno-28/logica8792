#include <stdio.h>
#include<locale.h>

int main(){

    int idade;

    printf("digite sua idade: ");
    scanf("%d",&idade);

if (idade >= 18){
    printf ("voce é maior de idade");
}else{
    printf("voce é menor de idade");
    }



    return 0;
}
