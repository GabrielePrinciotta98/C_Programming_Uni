#include <stdio.h>

int collatz(int n);

int main(void)
{
    int n, c = 1;
    printf("INserisci n:\n");
    scanf("%d", &n);
    while (n != 1)
    {
        printf("%d ", n);
        n = collatz(n);
        c++;
    }
    printf("%d\n", 1);
    printf("Lunghezza: %d\n", c);
    return 0;
}


int collatz(int n)
{
    if (n % 2 == 0)
        n /= 2;
    else
    {
        n = n*3 + 1;
    }
    return n;
}
