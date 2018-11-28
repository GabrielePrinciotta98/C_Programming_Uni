#include <stdio.h>
#include <ctype.h>

main(void)
{
    char ch;
    printf("Inserisci carattere\n");
    scanf("%c", &ch);
    ch = tolower(ch);
    if ((ch > 96) & (ch < 123))
        printf("Appartiene all'alfaabeto italiano\n");
    else
        printf("NON appartiene all'alfabeto itlaiano\n");
}
