#include <stdio.h>
#include <windows.h>
#include <string.h>

int votosA = 0;
int votosB = 0;
int votosNulos = 0;

void votar(int numero){
    if(numero == 1){
        votosA++;
        printf("Voce votou no Cadidato A \n");
    }else if (numero == 2){
        votosB++;
        printf("Voce votou no candidato B \n");
    }else{
        votosNulos++;
        printf("voto nulo \n");
    }
}

void resultado(){
    printf("\n resultado da votação \n");
    printf("candidato A %d votos\n", votosA);
    printf("candidato B %d votos\n", votosB);
    printf("Nulos %d votos\n", votosNulos);


    if (votosA == 0 && votosB && votosNulos > 0){
        printf("não houve vencendor\n")
    }else if (votosA > votosB){
        printf("candidato A venceu\n");
    }else if (votosB > votosA){
        printf("candidato B venceu\n");
    }else{
        printf("empate");
    }
    
    
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int voto;
int totalEleitores = 10;

    for (int i = 0; i < totalEleitores; i++){
        printf("eleitor %d - digite 1 para A, 2 para B", i + 1);
        scanf("%d", &voto);
        votar(voto);
    }
    
    resultado();

return 0; 

}
