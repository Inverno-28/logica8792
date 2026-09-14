#include <stdio.h>
#include<locale.h>

int main(){

    int idade;

    printf("digite sua idade: ");
    scanf("%d",&idade);

if (idade >= 50){
    printf ("senior");
}else if (idade >= 18){
    printf("maior de idade");
}else if (idade >=12){
    printf("adolescente");
}else if (idade >= 9){
    printf("pre-adolecente");
}else{
    printf("criança");}

    return 0;
}
