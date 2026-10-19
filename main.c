#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char p[50] = "Programar";

for(int i; i < 3; i++){
    printf ("%d - %s\n", i + 1, p);
}


return 0; 

}
