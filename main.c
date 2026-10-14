#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n;

printf("Digite o tamanho dos vetores\n");
scanf("%d", &n);

int a[n], b[n], soma[n];

printf("digite os valores do vetor a:\n");

for (int i = 0; i < n; i++){
    scanf("%d", &a[i]);
}

printf("digite os valores do vetore B:\n");
for (int i = 0; i < n; i++){
    scanf("%d", &b[i]);

}

for(int i = 0; i < n; i++){
    soma[i] = a[i] + b[i];
}
printf("vetor soma\n");
for (int i = 0; i < n; i++){
    printf("%d\n", soma[i]);
}


return 0; 

}
