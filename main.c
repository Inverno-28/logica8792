#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

#define QTD 5

void cadastro(float notas[]){
    for (int i = 0; i < QTD; i++){
        printf("Digite a nota do aluno %d", i + 1);
        scanf("%d", &notas[i]);

    }

}

void mostrar(float notas[]){
    for (int i = 0; i < QTD; i++){
        printf("Aluno %d: %.1f\n", i + 1, notas[i]);

    }

}

float calcularMedia(float notas[]){
    float soma = 0;
    for(int i = 0; i < QTD; i++){
        soma += notas[i];
    }
    return soma / QTD;

}
float maiorNota(float notas[]){
    float maior = notas[0];
    for (int i = 0; i < QTD; i++){
        if (notas[i] > maior){
            maior = notas[i];
        }
        
    }
  
    return maior;

}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float notas[QTD];
int opcao;
int cadastrado = 0;

do{
    printf("\n---CONTROLE DE NOTAS---\n");
    printf("1 - Cadastrar notas\n");
    printf("2 - Mostrar notas\n");
    printf("3 - media da turma\n");
    printf("4 - maior nota \n");
    printf("0 - sair\n");
    printf("escolha");
    scanf("%d", &opcao);

switch (opcao){
case 1:
    cadastro(notas);
    cadastrado = 1;
    break;

case 2:
    if (cadastrado){
        mostrar(notas);
    }else{
        printf("Nenhuma nota cadastrada");
    }
    break;

case 3:
    if (cadastro){
        printf("media da turma: %.2f\n", calcularMedia(notas));
    }else{
    printf("nenhuma nota cadastrada\n");
    }
    
case 4:
    if (cadastrado){
        printf("Maior Nota: %.1f\n", maiorNota(notas));
    }else{
        printf("nenhuma nota cadastrada");
    }
    
case 0:
    printf("ate mais\n");
    break;

default:
    printf("opção invalida:");
    break;

    }

}while (opcao != 0);


return 0; 

}
