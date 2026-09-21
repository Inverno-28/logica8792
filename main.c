#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char nomes[5][20] = {"beijamin", "adelino", "fotocopia", "jocelino", "altair"};

    printf("%s", nomes[0]);
    printf("\n%s", nomes[1]);
    printf("\n%s", nomes[2]);
    printf("\n%s", nomes[3]);
    printf("\n%s", nomes[4]);
    
return 0;

}