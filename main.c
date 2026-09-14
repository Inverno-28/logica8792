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
    printf("crianca");}


printf("%s", idade >= 50 ? "senior" : idade >= 18 ? "maior de idade" : idade >= 12 ? "adolescente" : idade >= 9 ? "pre-adolecente" : "crianca");

    return 0;
}
