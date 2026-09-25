#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <string.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n, primo = 1;

    printf("digite um numero: ");
        scanf("%d",&n);

if(n < 2){ // aqui caso o numero seja menor q 2 (tds os negaticos, 0 e 1) ele ja vai falar direto q n é primo
    primo = 0;
}else{
    for(int i = 2; i <= n / 2; i++){ // aqui ele vai checar se o numero é divisivel e se sobra resto, se n sobrar é primo
        if (n % i == 0){
            primo = 0;
            break;
        }   
    }
}

//aqui ele vai fazer uma verificação de 0 ou 1 encima da variavel primo para ser verdadeira ou falsa
if (primo){
    printf("%d é primo", n);
}else{
    printf("%d não é primo", n);
}


return 0;

}