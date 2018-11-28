#include <stdio.h>

int main(void)
{
    int n;
    int c = 0;
    printf("Inserisci numero:\n");
    scanf("%d", &n);
    for (int i=n; i>0; i--)
    {
        if (n%i == 0)
        {
            c++;
            printf("%d\n", i);
        }
    }
    printf("%s%d\n", "Numero di divisori: ", c);
}
