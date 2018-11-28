#include <stdio.h>

int main(void)
{
    int mat[5][5] = {{0},{0}};
    int i,j;
    int c = 1;
    float mediast;
    float mediaex;
    int somma = 0;
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<5; i++)
    {
        mediast = 0;
        somma = 0;
        for (j=0; j<5; j++)
        {
            somma += mat[i][j];
            mediast = somma/5.0;
        }
        printf("Media del %d studente:  %f\n", c, mediast);
        c++;
    }
    somma = 0;
    c = 1;
    for (j=0; j<5; j++)
    {
        mediaex = 0;
        somma = 0;
        for (i=0; i<5; i++)
        {
            somma += mat[i][j];
            mediaex = somma/5.0;
        }
        printf("Media del %d esame:  %f\n", c, mediaex);
        c++;
    }

    return 0;
}
