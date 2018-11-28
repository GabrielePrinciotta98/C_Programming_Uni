#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int k;
    char ch;
    printf("Inserisci chiave + frase:\n");
    scanf("%d", &k);
    do
    {
        ch = getchar();
        if (isalpha(ch) == 0)
            printf("%c", ch);
        else
        {
            if (isupper(ch) != 0)
            {
                ch = (((ch + k) -'A') % 26) + 'A';
                printf("%c", ch);
            }
            else
            {
                ch = (((ch + k) -'a') % 26) + 'a';
                printf("%c", ch);
            }
        }
    } while(ch != '\n');
}
