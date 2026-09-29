#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MINAS 5

int main() {

    int campo[TAM][TAM] = {0};
    int aberto[TAM][TAM] = {0};

    int linha, coluna;
    int minasColocadas = 0;
    int jogadas = 0;

    srand(time(NULL));

    // Colocar minas
    while (minasColocadas < MINAS) {

        int x = rand() % TAM;
        int y = rand() % TAM;

        if (campo[x][y] != -1) {
            campo[x][y] = -1;
            minasColocadas++;
        }
    }

    // Calcular números
    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {

            if (campo[i][j] == -1)
                continue;

            int contador = 0;

            for (int l = -1; l <= 1; l++) {

                for (int c = -1; c <= 1; c++) {

                    int ni = i + l;
                    int nj = j + c;

                    if (ni >= 0 && ni < TAM &&
                        nj >= 0 && nj < TAM &&
                        campo[ni][nj] == -1) {

                        contador++;
                    }
                }
            }

            campo[i][j] = contador;
        }
    }

    while (1) {

        printf("\n   ");

        for (int i = 0; i < TAM; i++) {
            printf("%d ", i);
        }

        printf("\n");

        for (int i = 0; i < TAM; i++) {

            printf("%d  ", i);

            for (int j = 0; j < TAM; j++) {

                if (aberto[i][j])
                    printf("%d ", campo[i][j]);
                else
                    printf("# ");
            }

            printf("\n");
        }

        printf("\nLinha: ");
        scanf("%d", &linha);

        printf("Coluna: ");
        scanf("%d", &coluna);

        if (linha < 0 || linha >= TAM ||
            coluna < 0 || coluna >= TAM) {

            printf("Posicao invalida!\n");
            continue;
        }

        if (campo[linha][coluna] == -1) {

            printf("\nBOOM! Voce perdeu!\n\n");

            for (int i = 0; i < TAM; i++) {

                for (int j = 0; j < TAM; j++) {

                    if (campo[i][j] == -1)
                        printf("* ");
                    else
                        printf("%d ", campo[i][j]);
                }

                printf("\n");
            }

            break;
        }

        if (!aberto[linha][coluna]) {
            aberto[linha][coluna] = 1;
            jogadas++;
        }

        if (jogadas == (TAM * TAM) - MINAS) {

            printf("\nParabens! Voce venceu!\n\n");

            for (int i = 0; i < TAM; i++) {

                for (int j = 0; j < TAM; j++) {

                    if (campo[i][j] == -1)
                        printf("* ");
                    else
                        printf("%d ", campo[i][j]);
                }

                printf("\n");
            }

            break;
        }
    }

    return 0;
}