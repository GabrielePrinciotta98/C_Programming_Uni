#include <stdio.h>
#include <string.h>

char scegliCarattere(char x, char y);

int main(void)
{
    char stringa[100];
    char temp;
    char ch;
    int i = 0;
    printf("Inserisci stringa:\n");
    scanf("%c ", &ch);
    while ((temp = getchar()) != '.')
    {
        stringa[i] = temp;
        i++;
    }
    for (i=0; i<strlen(stringa); i++)
    {
        printf("%c", scegliCarattere(ch, stringa[i]));
    }
    printf("\n");
}

char scegliCarattere(char x, char y)
{
    if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u')
        return x;
    else
        return y;
}
