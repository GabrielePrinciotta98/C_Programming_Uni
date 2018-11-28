#include <stdlib.h>
#include <stdio.h>

void *my_malloc(size_t size);
void *my_realloc(void *p, size_t size);

int main(void)
{
    int *a, n = 0;
    int dim = 2;
    int x;
    int i;
    a = my_malloc(dim);
    int *temp;
    while (1)
    {
        scanf ("%d", &x);
        if (x == 0)
            break;
        if (n >= dim)
        {
            dim *= 2;
            temp = my_realloc(a, dim * sizeof(int));
            if (temp != NULL)
                a = temp;
        }
        if (x == '\n')
            continue;
        a[n++] = x;
    }
    for (i = 0; i<n ; i++)
        printf("%d ", a[i]);
    printf("\n");

    for (i = n-1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}


void *my_malloc(size_t size)
{
    void *p = malloc(size);
    if (p == NULL)
    {
        printf("malloc failure\n");
        exit(1);
    }
    else
    {
        return p;
    }
}


void *my_realloc(void *p, size_t size)
{
    void *q;
    if (p == NULL)
    {
        printf("NULL pointer\n");
        exit(1);
    }
    else
    {
        q = realloc(p, size);
        //free(p);
        return q;
    }
}
