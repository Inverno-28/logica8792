#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

#define QTD 5

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

const int alunos = 5; 
float notas[alunos];
float soma = 0;
for (int i = 0; i < alunos; i++){
    printf("notas do aluno %d: ", i + 1);
    scanf("%f", &notas[i]);
    soma += notas[i];
}
printf("\n--- NOTAS ---\n");
for (int i = 0; i < alunos; i++){
    printf("Alunos %d: %.1f\n", i + 1, notas[i]);
}
printf("\nMedia da turma: %.1f", soma / alunos);

return 0; 

}
