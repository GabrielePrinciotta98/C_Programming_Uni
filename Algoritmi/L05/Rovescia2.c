#include <stdio.h>

#define N 100

int main(void)
{
    int a[N];
    int *p;
    int c;
    int k = 0;
    for (p = a; p < a + N; p++)
    {
        scanf("%d", &c);
        if (c == 0)
            break;
        else
        {
            *p = c;
            k++;
        }
    }
    for (p = a + k - 1; p >= a; p--)
    {
        printf("%d ", *p);
    }
    printf("\n");
    return 0;
}
