#include <stdio.h>
#define N 10

int main(void)
{
    int a[N] = {};
    int i;
    int c;
    for (i=0; i<N; i++)
    {
        scanf("%d", &c);
        if (c == 0)
            break;
        else
            a[i] = c;
    }
    for (i=N-1; i>=0; i--)
    {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
