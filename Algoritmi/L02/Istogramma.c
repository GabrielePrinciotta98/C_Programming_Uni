#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char frase[100] = {};
    int i = 0;
    int j;
    int c = 0;
    char ch = 65;
    scanf(" %[^\n]s", frase);
    printf("%s\n", frase);
    while(ch != 91)
    {
        frase[i] = toupper(frase[i]);
        if (ch == frase[i] && isalpha(frase[i]))
            c++;
        if (frase[i+1] == '.')
            {
                if (c != 0)
                    printf("%c  ", ch);
                for (j=0; j<c; j++)
                    printf("%c", '*');
                if (c != 0)
                    printf("\n");
                ch++;
                i = 0;
                c = 0;
                continue;
            }
        i++;
    }

    return 0;
}
