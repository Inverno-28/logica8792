#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char l;

printf("digite uma letra: ");
scanf("%c", &l);

if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || 
    l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'A'){
        printf("vogal\n");
    }else{
        printf("consoante\n");
}


    return 0;
}