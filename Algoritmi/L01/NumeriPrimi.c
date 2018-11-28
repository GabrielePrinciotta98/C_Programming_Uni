#include <stdio.h>

/*int main(void)
{
    int n;
    int c = 0;
    printf("Inserisci numero:\n");
    scanf("%d", &n);
    for (int i=1; i<=n ; i++)
    {
        if (n%i == 0)
            c++;
    }
    if (c == 2)
        printf("%d%s\n", n, " è primo");
    else
        printf("%d%s\n", n, " non è primo");
}*/

int main(void)
{
    int n;
    int i = 1;
    int c = 0;
    printf("Inserisci numero:\n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n%i == 0)
            c++;
        i++;
    }
    if (c == 2)
        printf("%d%s\n", n, " è primo");
    else
        printf("%d%s\n", n, " non è primo");
}
