#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[100] = {};
    int i;
    char ultimo;
    printf("Inserisci stringa:\n");
    scanf("%[^\n]s", frase);
    for (i=0; i<100; i++)
    {
        if (frase[i] == '\0')
            break;
        ultimo = frase[i];
    }
    int l = strlen(frase);
    int c = 0;
    for (i=0; i<l; i++)
    {
        if (frase[i] == ultimo)
        {
            frase[i] = '\0';
            c++;
        }
    }
    for (i=0; i<l; i++)
    {
        if (frase[i] == '\0')
            continue;
        putchar(frase[i]);
    }
    printf("\n");
    return 0;
}
