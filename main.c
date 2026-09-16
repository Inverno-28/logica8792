#include <stdio.h>
#include<locale.h>

int main(){

    int idade;
    float altura;

    printf("Bem-vindos ao brinquedo roleta da morte!");
    printf("\n qual sua idade?");
    scanf("%d", &idade);
    printf("\n qual sua altura");
    scanf("%f", &altura);

    if((idade >= 18) && (altura >= 1.60)){
        printf("voce pode brincar na roleta!");
    }else{
        printf("voce nao pode brincar na roleta!");
    }

    return 0;
}
