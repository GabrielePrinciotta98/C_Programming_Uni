#include <stdlib.h>
#include <stdio.h>

void *my_realloc(void *p, size_t size);

int main(void)
{
    int dim = 10;
    int *p = malloc(dim);
    p = NULL;
    int *q = my_realloc(p, 2*dim);
    printf("<%d>\n", *q);
    return 0;
}

void *my_realloc(void *p, size_t size)
{
    if (p == NULL)
    {
        printf("NULL pointer\n");
        exit(1);
    }
    else
    {
        //free(p);
        return realloc(p, size);
    }

}
