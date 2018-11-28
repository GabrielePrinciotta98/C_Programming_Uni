#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 1000;
    char risposta;
    int x = 500;
    do
    {
        printf(" %s%d%s", "Il numero è ", x, "?  ");
        scanf(" %c", &risposta);
        if (risposta == '=')
            break;
        if (risposta == '<')
        {
            max = x;
            x = min + (max-min)/2;
            //printf("%s%d\n", "MASSIMO: ", max);
            //printf("%s%d\n", "MINIMO: ", min);
        }
        else
        {
            min = x;
            x = min + ((max-min)/2);
            //printf("%s%d\n", "MASSIMO: ", max);
            //printf("%s%d\n", "MINIMO: ", min);
        }
    }while (risposta != '=');
    printf("%s%d\n", "il numero giusto è: ", x);
}
