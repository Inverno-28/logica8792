#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 9
#define MINAS 10

void escavar(int campo[TAM][TAM], int aberto[TAM][TAM],
             int bandeira[TAM][TAM], int linha, int coluna)
{
    if (linha < 0 || linha >= TAM ||
        coluna < 0 || coluna >= TAM)
        return;

    if (aberto[linha][coluna])
        return;

    if (bandeira[linha][coluna])
        return;

    aberto[linha][coluna] = 1;

    if (campo[linha][coluna] != 0)
        return;

    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            escavar(
                campo,
                aberto,
                bandeira,
                linha + i,
                coluna + j
            );
        }
    }
}

int main()
{
    int campo[TAM][TAM] = {0};
    int aberto[TAM][TAM] = {0};
    int bandeira[TAM][TAM] = {0};

    int minasColocadas = 0;
    int linha, coluna;
    int opcao;

    srand(time(NULL));

    while (minasColocadas < MINAS)
    {
        int x = rand() % TAM;
        int y = rand() % TAM;

        if (campo[x][y] != -1)
        {
            campo[x][y] = -1;
            minasColocadas++;
        }
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (campo[i][j] == -1)
                continue;

            int contador = 0;

            for (int l = -1; l <= 1; l++)
            {
                for (int c = -1; c <= 1; c++)
                {
                    int ni = i + l;
                    int nj = j + c;

                    if (ni >= 0 && ni < TAM &&
                        nj >= 0 && nj < TAM &&
                        campo[ni][nj] == -1)
                    {
                        contador++;
                    }
                }
            }

            campo[i][j] = contador;
        }
    }

    while (1)
    {
        int abertas = 0;
        int bandeiras = 0;

        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                if (aberto[i][j])
                    abertas++;

                if (bandeira[i][j])
                    bandeiras++;
            }
        }

        printf("\nMinas restantes: %d\n\n", MINAS - bandeiras);

        printf("   ");

        for (int i = 0; i < TAM; i++)
            printf("%d ", i);

        printf("\n");

        for (int i = 0; i < TAM; i++)
        {
            printf("%d  ", i);

            for (int j = 0; j < TAM; j++)
            {
                if (bandeira[i][j])
                {
                    printf("F ");
                }
                else if (aberto[i][j])
                {
                    printf("%d ", campo[i][j]);
                }
                else
                {
                    printf("# ");
                }
            }

            printf("\n");
        }

        printf("\n1 - Escavar\n");
        printf("2 - Bandeira\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        printf("Linha: ");
        scanf("%d", &linha);

        printf("Coluna: ");
        scanf("%d", &coluna);

        if (linha < 0 || linha >= TAM ||
            coluna < 0 || coluna >= TAM)
        {
            printf("Posicao invalida!\n");
            continue;
        }

        if (opcao == 2)
        {
            if (!aberto[linha][coluna])
            {
                bandeira[linha][coluna] =
                !bandeira[linha][coluna];
            }

            continue;
        }

        if (bandeira[linha][coluna])
        {
            printf("Casa marcada com bandeira!\n");
            continue;
        }

        if (campo[linha][coluna] == -1)
        {
            printf("\nBOOOOM! Voce perdeu!\n\n");

            for (int i = 0; i < TAM; i++)
            {
                for (int j = 0; j < TAM; j++)
                {
                    if (campo[i][j] == -1)
                        printf("* ");
                    else
                        printf("%d ", campo[i][j]);
                }

                printf("\n");
            }

            break;
        }

        escavar(
            campo,
            aberto,
            bandeira,
            linha,
            coluna
        );

        abertas = 0;

        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                if (aberto[i][j])
                    abertas++;
            }
        }

        if (abertas == (TAM * TAM) - MINAS)
        {
            printf("\nPARABENS! VOCE VENCEU!\n\n");

            for (int i = 0; i < TAM; i++)
            {
                for (int j = 0; j < TAM; j++)
                {
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