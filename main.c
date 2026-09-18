#include <stdio.h>
#include <windows.h>

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int m;

    printf("digite um numero respequitivo ao mes do ano: ");
    scanf("%d", &m);

    switch (m)

    {

    case 12: 
    case 1: 
    case 2:
        printf("verão");
        break;

    case 3:
    case 4:
    case 5:
        printf("outono");
        break;

    case 6:
    case 7:
    case 8: 
        printf("inverno");
        break;
    
    case 9:
    case 10:
    case 11:
        printf("primavera");
        break;
  
    //case 13:
        //printf("todos os anos deveria ter 13 meses, eles teriam tds 4 semanas e exataos 28 dias cada, e tds as semanas começariam e terminariam com domingo e sabado");
        //break;
        
    default:
        printf("valor invalido");
        break;
        
    }

    return 0;
}