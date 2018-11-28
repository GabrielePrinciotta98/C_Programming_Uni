#include <stdio.h>

int main(void)
{
    int n;
    float somma = 0;
    float c = -1;
    do
    {
        printf("Aggiungi:\n");
        scanf("%d", &n);
        somma += n;
        c++;
    } while(n != 0);
    printf("%f\n", (somma/c));
}
