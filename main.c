#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("quantos nomes deseja digitar? ");
scanf("%d", &n);

char nomes[n][50];

for (int i = 0; i < n; i++){
    printf("digite o nome %d: ", i + 1);
    scanf("%s", nomes[i]);
}
for (int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - 1; j++){
        if (strcmp(nomes[j], nomes[j + 1]) > 0){
            char temp[50];
            strcpy(temp, nomes[j]);
            strcpy(nomes[j], nomes[j + 1]);
            strcpy(nomes[j + 1], temp);
        }
    }
}

printf("nomes em ordem alfabetica:\n");
for (int i = 0; i < n; i++){
    printf("%s\n", nomes[i]);
}


return 0; 

}
