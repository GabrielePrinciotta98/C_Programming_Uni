#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t size);

int main(void)
{
    //int dim = 10;
    int *p = my_malloc(10);
    if (p == NULL)
        printf("malloc failure\n");
    printf("<%d>\n", *p);
    return 0;
}

void *my_malloc(size_t size)
{
    if (malloc(size) == NULL)
    {
        printf("malloc failure\n");
        exit(1);
    }
    else
        return malloc(size);
}
