#include <stdio.h>
#include <windows.h>

void saudar(const char *nome){
   printf ("ola  %S\n", nome);
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

const char nome;

printf ("nome %s", nome);
scanf ("%s", nome);

saudar(nome);

return 0;

}