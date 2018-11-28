#include <stdio.h>
#include <math.h>
    
int main(void)
{
    short h1, min1, sec1;
    short h2, min2, sec2;
    short hr, minr, secr;
    char puntini;
    printf("Inserisci orario 1:\n");
    scanf("%hi%c%hi%c%hi", &h1, &puntini, &min1, &puntini, &sec1);
    printf("Inserisci orario 2:\n");
    scanf("%hi%c%hi%c%hi", &h2, &puntini, &min2, &puntini, &sec2);
    hr = fabs(h2 - h1);
    minr = fabs(min2 - min1);
    secr = fabs(sec2 - sec1);
    printf("%hi%c%hi%c%hi\n", hr, puntini, minr, puntini, secr);
}
