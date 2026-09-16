#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int idade;
int ehEstudante;

printf("qual sua idade?");
scanf("%d", &idade);
printf("\nvoce é estudante (0 - não | 1 - sim):");
scanf("%d", &ehEstudante);

if((idade >= 60) && (ehEstudante == 1)){
    printf("parabens, vc tem direito a desconto");
}else{
    printf("voce não tem diretiro a desconto");
}


    return 0;
}
