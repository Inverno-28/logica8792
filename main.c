#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n1, n2, n3;
float media;
float freq;

printf ("digite 3 notas");
scanf("%d %d %d", &n1, &n2, &n3);

media = (n1+n2+n3)/3;

printf("digite frequencia (em numeros apenas):  ");
scanf("%f", &freq);

if(media >= 7 && freq >= 75){
    printf("\n aprovado com sucesso ", media);
}else{
    printf("\n reprovado", media);
}

    return 0;
}
