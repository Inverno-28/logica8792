#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n1,n2,n3;
float media;

printf("digite 3 notas:");
scanf("%d %d %d", &n1,&n2,&n3);

media = (n1+n2+n3)/3;

if(media >= 7){
    printf("aprovado %d", media);
}else if (media >= 5){
    printf("recuperação %d", media);
}else{
    printf ("reprovado %d", media);
}


    return 0;
}
