#include <stdio.h>
#include <windows.h>

void saudar(const char *nome) {
    printf("Ola %s\n", nome);
}

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    saudar("daniel");
    saudar("winter");
   
    return 0;
}