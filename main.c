#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int voto;

printf("qual o candidato q vc quer votar: \n manoel 1 \n carla 2 \n bianca 3 \n henrique 4 \n bruno 5 \n");
    scanf("%d", &voto);

    if (voto == 1){
        printf("voce votou em manoel");}
    else if (voto == 2){
         printf("voce votou em carla");}
    else if (voto == 3){
         printf("voce votou em bianca");}
    else if (voto == 4){
         printf("voce votou em henrique");}
    else if (voto == 5){
         printf("voce votou em bruno");}    
    else{
        printf("candidato invalido");}

return 0; 

}
