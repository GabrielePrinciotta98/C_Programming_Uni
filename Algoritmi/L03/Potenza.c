#include <stdio.h>

int potenza(int b, int e);

int main(void)
{
    int b,e;
    printf("Inserisci la base:\n");
    scanf("%d", &b);
    printf("Inserisci l'esponente:\n");
    scanf("%d", &e);
    printf("%d\n", potenza(b,e));


    return 0;
}


int potenza(int b, int e)
{
    int i;
    int ris = 1;
    if (e == 0)
        return 1;
    else
    {
        if (e == 1)
            return b;
        else
        {
            for (i=0; i<e; i++)
                ris *= b;
            return ris;
        }
    }
}
