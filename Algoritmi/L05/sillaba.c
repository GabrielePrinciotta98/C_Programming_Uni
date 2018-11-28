#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i,j;
    char ch = ' ';
    char temp = ' ';
    for (i=1; i<argc; i++)
    {
        for (j=0; j<strlen(argv[i]); j++)
        {
            ch = argv[i][j];
            if (j >= 1 && temp > ch)
            {
                printf("-%c", ch);
            }
            else
                printf("%c", ch);
            temp = ch;
        }
    }
    printf("\n");
    return 0;
}
