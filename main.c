
#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao;
float a, b;

do{
    printf("\nMENU");
    printf("\n1 soma");
    printf("\n2 subtração");
    printf("\n3 multi");
    printf("\n4 divisao");
    printf("\n0 sair");
    printf("escolha um opção: ");
        scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("digite 2 numeros");
            scanf("%f %f", &a,&b);
            printf("resultado: %.2f\n", a + b);
            break;
        
        case 2:
            printf("digite 2 numeros");
            scanf("%f %f", &a,&b);
            printf("resultado: %.2f\n", a - b);
            break;    

        case 3:
            printf("digite 2 numeros");
            scanf("%f %f", &a,&b);
            printf("resultado: %.2f\n", a * b);
            break;

        case 4:
            printf("digite 2 numeros");
            scanf("%f %f", &a,&b);
            if(b != 0)
                printf("resultado: %.2f\n", a / b);
            else
                printf("erro tonto divisão por zero");
            break;

            case 0:
                printf("saindo");
                break;
    
        default: 
            printf("n sei");
            break;
    }
}while (opcao != 0);{
    
}


return 0; 

}
