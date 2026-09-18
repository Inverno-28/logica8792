#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float n1,n2,n3,media;

printf("digite 3 notas:");
scanf("%f %f %f", &n1,&n2,&n3);

media = (n1+n2+n3)/3;

if(media >= 7){
    printf("aprovado %.2f", media);
}else if (media >= 5){
    printf("recuperação %.2f", media);
}else{
    printf ("reprovado %.2f", media);
}


    return 0;
}