#include <stdio.h>

int main(void)
{
    int n;
    int somma = 0;
    int c = 0;
    do
    {
        printf("Aggiungi:\n");
        scanf("%d", &n);
        somma += n;
        c++;
    } while(c != 10 && n != 0);
    printf("%d\n", somma);
}
