#include <stdio.h>

int main(void)
{
    short h, min;
    char puntini;
    printf("Inserisci orario:\n");
    scanf("%hi%c%hi", &h, &puntini, &min);
    if (h > 12)
        printf("%hi%c%hi%s\n", h - 12, puntini, min, " PM");
    else
        printf("%hi%c%hi\n", h, puntini, min);
}
