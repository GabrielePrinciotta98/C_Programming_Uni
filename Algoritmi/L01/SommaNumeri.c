#include <stdio.h>

int main(void)
{
    int n;
    int somma = 0;
    do
    {
        printf("Aggiungi:\n");
        scanf("%d" , &n);
        somma += n;
    } while(n != 0);
    printf("%d\n", somma);
}
