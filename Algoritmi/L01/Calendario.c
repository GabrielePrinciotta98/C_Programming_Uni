#include <stdio.h>

int main(void)
{
    int mese;
    int giorno;
    printf("Inserisci il numero del mese: ");
    scanf("%d", &mese);
    printf("Inserisci il giorno di inizio mese: ");
    scanf("%d", &giorno);
    int ngiorni;
    if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
        ngiorni = 30;
    else
    {
        if (mese == 2)
            ngiorni = 28;
        else
            ngiorni = 31;
    }
    printf("%s\n","L    M   M   G   V   S   D");
    int g = 0;
    int i;
    for (i=0; i<giorno; i++)
    {
        printf("%c", ' ');
    }
    for (i=0; i<5; i++)
    {
        for (int j=0; j<7; j++)
        {
            printf("%d%s", g, "   ");
            g++;
        }
        printf("\n");
    }

    return 0;
}
