#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *maiuscolo(char *stringa);

int main(void)
{
    char s[100];
    scanf("%s", s);
    printf("%s\n", maiuscolo(s));
    return 0;
}

char *maiuscolo(char *stringa)
{
    char *p;
    p = stringa;
    while (*stringa != '\0')
    {
        if (isalpha(*stringa) != 0)
        {
            *stringa = toupper(*stringa);
        }
        stringa++;
    }

    return  p;
}
