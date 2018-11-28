#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i,j;
    for (i=1; i<argc; i++)
    {
        for (j=0; j<strlen(argv[i]); j++)
        {
            char ch = argv[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                printf("%cf%c", ch, ch);
            }
            else
                printf("%c", ch);
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}
